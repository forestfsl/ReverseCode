
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeChatRedEnvelopesParamQueue.h"





//关于界面
@interface WCTableViewManager
- (long long)numberOfSectionsInTableView:(id)arg1;
@end
@interface NewSettingViewController:UIViewController
@end



%hook WCTableViewManager
%new
- (void)textFieldDidChangeValue:(NSNotification *)notification{
    
    UITextField *sender = (UITextField *)[notification object];
    [SLDefaults setValue:sender.text forKey:SLTIMEKEY];
    [SLDefaults synchronize];
}

%new
-(void)switchChang:(UISwitch *)switchView{
    [WeChatRedEnvelopesParamQueue sharedQueue].isAuto = switchView.isOn;
    NSLog(@"是否自动抢红包%d",[WeChatRedEnvelopesParamQueue sharedQueue].isAuto);
    [SLDefaults setBool:switchView.isOn forKey:SLSWITCSLEY];
    [SLDefaults synchronize];
    [MSHookIvar <UITableView *>(self,"_tableView") reloadData];
}


- (void)scrollViewWillBeginDragging:(id)arg1{
    %orig;
    [MSHookIvar <UITableView *>(self,"_tableView") endEditing:YES];
}


//返回高度
- (double)tableView:
(UITableView *)tableView heightForRowAtIndexPath:(id)indexPath{
    //定位设置界面,并且是最后一组
    if([tableView.nextResponder.nextResponder isKindOfClass:%c(NewSettingViewController)]
       && [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){
        return 44;
        
    }else{
        return %orig;
    }
}


//每一个Cell
- (id)tableView:(UITableView *)tableView cellForRowAtIndexPath:(id)indexPath{
    //定位设置界面,并且是最后一组
    if([tableView.nextResponder.nextResponder isKindOfClass:%c(NewSettingViewController)]
       && [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){
        
        UITableViewCell * cell = nil;
        if([indexPath row] == 0){
            static NSString * swCell = @"SWCELL";
            cell = [tableView dequeueReusableCellWithIdentifier:swCell];
            if(!cell){
                cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
            }
            cell.textLabel.text = @"自动抢红包";
            //抢红包开关!!
            UISwitch * switchView = [[UISwitch alloc] init];
            switchView.on = [SLDefaults boolForKey:SLSWITCSLEY];
            [WeChatRedEnvelopesParamQueue sharedQueue].isAuto =  switchView.on;
              NSLog(@"是否自动抢红包%d",[WeChatRedEnvelopesParamQueue sharedQueue].isAuto);
            [switchView addTarget:self action:@selector(switchChang:) forControlEvents:(UIControlEventValueChanged)];
            cell.accessoryView = switchView;
            cell.imageView.image = [UIImage imageNamed:([SLDefaults boolForKey:SLSWITCSLEY] == 1) ? @"unlocked" : @"locked"];
        }else if([indexPath row] == 1){
            static NSString * waitCell = @"waitCell";
            cell = [tableView dequeueReusableCellWithIdentifier:waitCell];
            if(!cell){
                cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
            }
//            cell.textLabel.text = @"等待时间(秒)";
//            UITextField * textField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, 150, 40)];
//            //监听键盘输入
//            [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textFieldDidChangeValue:) name:UITextFieldTextDidChangeNotification object:textField];
//            textField.text = [SLDefaults valueForKey:SLTIMEKEY];
//            textField.borderStyle = UITextBorderStyleRoundedRect;
//            cell.accessoryView = textField;
//            cell.imageView.image = [UIImage imageNamed:@"clock"];
            
        }
        cell.backgroundColor = [UIColor whiteColor];
        return cell;
        
    }else{
        return %orig;
    }
}



//每组多少行
- (long long)tableView:(UITableView *)tableView numberOfRowsInSection:(long long)section{
    //定位设置界面,并且是最后一个
    if([tableView.nextResponder.nextResponder isKindOfClass:%c(NewSettingViewController)]
       && section ==[self numberOfSectionsInTableView:tableView]-1){
        return 1;
        
    }else{
        return %orig;
    }
}

//多少组
- (long long)numberOfSectionsInTableView:(id)arg1{
    UITableView * tableView = MSHookIvar <UITableView *>(self,"_tableView");
    if([tableView.nextResponder.nextResponder isKindOfClass:%c(NewSettingViewController)]){//定位设置界面
        //在原来基础上多搞一组
        return %orig+1;
        
    }else{
        return %orig;
    }
}
%end




%hook NewSettingViewController
%new
-(void)keyboardWillShow:(NSNotification*)note{
    
    UIView * view = self.view;
    CGRect keyBoardRect=[note.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    view.frame = CGRectMake(0, -keyBoardRect.size.height, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height );
    
}

%new
-(void)keyboardWillHide:(NSNotification*)note{
    UIView * view = self.view;
    view.frame = CGRectMake(0, 0, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height);
    
}

- (void)viewDidLoad{
    %orig;
    //监听textField弹出和消失
    [[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(keyboardWillShow:) name:UIKeyboardWillShowNotification object:nil];
    
    [[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(keyboardWillHide:) name:UIKeyboardWillHideNotification object:nil];
}



%end

