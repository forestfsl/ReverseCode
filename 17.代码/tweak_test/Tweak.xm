

%hook ViewController

- (void)click
{
	UIView *view = [[UIView alloc] init];
	view.frame = CGRectMake(100, 100, 100, 100);
	view.backgroundColor = [UIColor redColor];
	[[self view] addSubview:view];
}

%end