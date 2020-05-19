// void __cdecl -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes](WCRedEnvelopesReceiveControlLogic *self, SEL a2)
// {
//   WCRedEnvelopesReceiveControlLogic *v2; // x19
  
//   void *v86; // [xsp+10h] [xbp-100h]
//   void *v87; // [xsp+30h] [xbp-E0h]
//   void *v88; // [xsp+38h] [xbp-D8h]
//   __int64 v89; // [xsp+40h] [xbp-D0h]
//   void **v90; // [xsp+58h] [xbp-B8h]
//   __int64 v91; // [xsp+60h] [xbp-B0h]
//   __int64 (__fastcall *v92)(); // [xsp+68h] [xbp-A8h]
//   void *v93; // [xsp+70h] [xbp-A0h]
//   WCRedEnvelopesReceiveControlLogic *v94; // [xsp+78h] [xbp-98h]
//   __int64 v95; // [xsp+80h] [xbp-90h]
//   void **v96; // [xsp+88h] [xbp-88h]
//   __int64 v97; // [xsp+90h] [xbp-80h]
//   __int64 (__fastcall *v98)(); // [xsp+98h] [xbp-78h]
//   void *v99; // [xsp+A0h] [xbp-70h]
//   void *v100; // [xsp+A8h] [xbp-68h]
//   WCRedEnvelopesReceiveControlLogic *v101; // [xsp+B0h] [xbp-60h]
//   char v102; // [xsp+B8h] [xbp-58h]

//   v2 = self;
//   v3 = objc_msgSend(*(void **)((char *)&self->super.super.m_loadView + 1), "m_oSelectedMessageWrap");
WCRedEnvelopesControlData * m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");



//   v4 = (void *)objc_retainAutoreleasedReturnValue(v3);
//   v5 = v4;
//   v6 = objc_msgSend(v4, "m_oWCPayInfoItem");
//   v7 = (void *)objc_retainAutoreleasedReturnValue(v6);
//   v8 = v7;
//   v9 = objc_msgSend(v7, "m_c2cNativeUrl");
NSString * m_c2cNativeUrl = m_data.m_oSelectedMessageWrap.m_oWCPayInfoItem.m_c2cNativeUrl;

//   v10 = (void *)objc_retainAutoreleasedReturnValue(v9);
//   v11 = objc_msgSend(CFSTR("wxpay://c2cbizmessagehandler/hongbao/receivehongbao?"), "length");
//   v12 = objc_msgSend(v10, "substringFromIndex:", v11);
 NSString * m_c2cNativeUrl2 = [m_c2cNativeUrl substringFromIndex:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?".length];


//   v13 = objc_retainAutoreleasedReturnValue(v12);
//   objc_release(v10);
//   objc_release(v8);
//   objc_release(v5);
//   v89 = v13;
//   v14 = +[WCBizUtil dictionaryWithDecodedComponets:separator:](
//           &OBJC_CLASS___WCBizUtil,
//           "dictionaryWithDecodedComponets:separator:",
//           v13,
//           CFSTR("&"));
 NSDictionary * url_dic = [WCBizUtil dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];


//   v15 = (void *)objc_retainAutoreleasedReturnValue(v14);
//   v16 = objc_msgSend(&OBJC_CLASS___NSMutableDictionary, "dictionary");
NSMutableDictionary * mutalbe_dic = [%c(NSMutableDictionary) dictionary];


//   v17 = (void *)objc_retainAutoreleasedReturnValue(v16);
//   objc_msgSend(v17, "safeSetObject:forKey:", CFSTR("1"), CFSTR("msgType"));
  	[mutalbe_dic setObject:@"1" forKey:@"msgType"];//imp  -- runtime API 


//   v18 = objc_msgSend(v15, "objectForKey:", CFSTR("sendid"));
//   v19 = objc_retainAutoreleasedReturnValue(v18);
//   objc_msgSend(v17, "safeSetObject:forKey:", v19, CFSTR("sendId"));
  	[mutalbe_dic setObject:url_dic[@"sendid"] forKey:@"sendId"];


//   objc_release(v19);
//   v88 = v15;
//   v20 = objc_msgSend(v15, "objectForKey:", CFSTR("channelid"));
//   v21 = objc_retainAutoreleasedReturnValue(v20);
//   objc_msgSend(v17, "safeSetObject:forKey:", v21, CFSTR("channelId"));
	[mutalbe_dic setObject:url_dic[@"channelid"] forKey:@"channelId"];  	



//   objc_release(v21);
//   v22 = objc_msgSend(&OBJC_CLASS___MMServiceCenter, "defaultCenter");
//   v23 = (void *)objc_retainAutoreleasedReturnValue(v22);
//   v24 = objc_msgSend(&OBJC_CLASS___CContactMgr, "class");
//   v25 = objc_msgSend(v23, "getService:", v24);
	 CContactMgr * contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];

//   v26 = (void *)objc_retainAutoreleasedReturnValue(v25);
//   v27 = v26;
//   v28 = objc_msgSend(v26, "getSelfContact");
	id selfContact	= [contactMgr getSelfContact];


//   v29 = (void *)objc_retainAutoreleasedReturnValue(v28);
//   objc_release(v27);
//   objc_release(v23);
//   v30 = objc_msgSend(v29, "getContactDisplayName");
	id displayName = [selfContact getContactDisplayName];

//   v31 = objc_retainAutoreleasedReturnValue(v30);
//   objc_msgSend(v17, "safeSetObject:forKey:", v31, CFSTR("nickName"));
	[mutalbe_dic setObject:displayName forKey:@"nickName"];  


//   objc_release(v31);
//   v87 = v29;
//   v32 = objc_msgSend(v29, "m_nsHeadImgUrl");
//   v33 = objc_retainAutoreleasedReturnValue(v32);
//   objc_msgSend(v17, "safeSetObject:forKey:", v33, CFSTR("headImg"));
//   objc_release(v33);
	[mutalbe_dic setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];  

//   v34 = objc_msgSend(*(void **)((char *)&v2->super.super.m_loadView + 1), "m_oSelectedMessageWrap");
	CMessageWrap * msgWrap = [m_data m_oSelectedMessageWrap];

//   v35 = objc_retainAutoreleasedReturnValue(v34);
//   objc_release(v35);
//   if ( v35 )
//   {
	if(msgWrap){
//	   v36 = objc_msgSend(*(void **)((char *)&v2->super.super.m_loadView + 1), "m_oSelectedMessageWrap");
//     v37 = (void *)objc_retainAutoreleasedReturnValue(v36);
//     v38 = v37;
//     v39 = objc_msgSend(v37, "m_oWCPayInfoItem");
//     v40 = (void *)objc_retainAutoreleasedReturnValue(v39);
//     v41 = v40;
//     v42 = objc_msgSend(v40, "m_c2cNativeUrl");
		NSString * m_c2cNativeUrl3 = msgWrap.m_oWCPayInfoItem.m_c2cNativeUrl;

//     v43 = objc_retainAutoreleasedReturnValue(v42);
//     objc_msgSend(v17, "safeSetObject:forKey:", v43, CFSTR("nativeUrl"));
		[mutalbe_dic setObject:m_c2cNativeUrl3 forKey:@"nativeUrl"];
//     objc_release(v43);
//     objc_release(v41);
//     objc_release(v38);
	}
//   }

//     
//   v44 = objc_msgSend(&OBJC_CLASS___MMServiceCenter, "defaultCenter");
//   v45 = (void *)objc_retainAutoreleasedReturnValue(v44);
//   v46 = objc_msgSend(&OBJC_CLASS___MMMsgLogicManager, "class");
//   v47 = objc_msgSend(v45, "getService:", v46);
	 MMMsgLogicManager * logciMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(MMMsgLogicManager) class]];

//   v48 = (void *)objc_retainAutoreleasedReturnValue(v47);
//   v49 = v48;
//   v50 = objc_msgSend(v48, "GetCurrentLogicController");
	 RoomContentLogicController * currentLogicController = [logciMgr GetCurrentLogicController];
//   v51 = (void *)objc_retainAutoreleasedReturnValue(v50);
//   objc_release(v49);
//   objc_release(v45);
//   if ( v51 )
//   {

	 if (currentLogicController)
	 {
// 		v52 = objc_msgSend(v51, "m_contact");
//     v53 = objc_retainAutoreleasedReturnValue(v52);
	 	CBaseContact * m_contact = [currentLogicController m_contact];
//     if ( v53 )
//     {
	 	if (m_contact)
	 	{
//		 v54 = objc_msgSend(v51, "m_contact");
//       v55 = (void *)objc_retainAutoreleasedReturnValue(v54);
//       v56 = v55;
//       v57 = objc_msgSend(v55, "m_nsUsrName");
	 		NSString * m_nsUsrName = [m_contact m_nsUsrName];
//       v58 = objc_retainAutoreleasedReturnValue(v57);
//       objc_release(v58);
//       objc_release(v56);
//       objc_release(v53);
//       if ( v58 )
//       {
	 		if(m_nsUsrName)
	 		{	
	//         v59 = objc_msgSend(v51, "m_contact");
	//         v60 = (void *)objc_retainAutoreleasedReturnValue(v59);
	//         v61 = v60;
	//         v62 = objc_msgSend(v60, "m_nsUsrName");
	//         v63 = objc_retainAutoreleasedReturnValue(v62);
	//         objc_msgSend(v17, "safeSetObject:forKey:", v63, CFSTR("sessionUserName"));
			[mutalbe_dic setObject:m_nsUsrName forKey:@"sessionUserName"];
	//         objc_release(v63);
	//         objc_release(v61);
	 		}
//       }
		}
//     }
	 }
//   }
//   v86 = v51;
//   v64 = objc_msgSend(*(void **)((char *)&v2->super.super.m_loadView + 1), "m_structDicRedEnvelopesBaseInfo");
		NSDictionary * baseInfo = [m_data m_structDicRedEnvelopesBaseInfo];
//   v65 = (void *)objc_retainAutoreleasedReturnValue(v64);
//   v66 = v65;
//   v67 = objc_msgSend(v65, "stringForKey:", CFSTR("timingIdentifier"));
		NSString * timingIdentifier = [baseInfo stringForKey:@"timingIdentifier"];

//   v68 = (void *)objc_retainAutoreleasedReturnValue(v67);
//   objc_release(v66);
//   if ( objc_msgSend(v68, "length") )
		if(timingIdentifier.length)
//     objc_msgSend(v17, "safeSetObject:forKey:", v68, CFSTR("timingIdentifier"));
			[mutalbe_dic setObject:timingIdentifier forKey:@"timingIdentifier"];
//   objc_initWeak(&v102, v2);
//   v69 = objc_msgSend(&OBJC_CLASS___MMServiceCenter, "defaultCenter");
//   v70 = (void *)objc_retainAutoreleasedReturnValue(v69);
//   v71 = objc_msgSend(&OBJC_CLASS___WCPayLogicMgr, "class");
//   v72 = objc_msgSend(v70, "getService:", v71);
	WCPayLogicMgr * payLogic = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCPayLogicMgr) class]];

//   v73 = (void *)objc_retainAutoreleasedReturnValue(v72);
//   objc_msgSend(v73, "setRealnameReportScene:", 1003LL);
	 [payLogic setRealnameReportScene:(unsigned int)1003];

//   objc_release(v73);
//   objc_release(v70);
//   v74 = objc_msgSend(&OBJC_CLASS___MMServiceCenter, "defaultCenter");
//   v75 = (void *)objc_retainAutoreleasedReturnValue(v74);
//   v76 = objc_msgSend(&OBJC_CLASS___WCPayLogicMgr, "class");
//   v77 = objc_msgSend(v75, "getService:", v76);

//   v78 = (void *)objc_retainAutoreleasedReturnValue(v77);
//   v79 = objc_msgSend(*(void **)((char *)&v2->super.super.m_loadView + 1), "m_structDicRedEnvelopesBaseInfo");
		NSDictionary * baseInfo2 = [m_data m_structDicRedEnvelopesBaseInfo];
//   v80 = (void *)objc_retainAutoreleasedReturnValue(v79);
//   v81 = v80;
//   v82 = objc_msgSend(v80, "objectForKeyedSubscript:", CFSTR("agree_duty"));
		id subScript = [baseInfo2 objectForKeyedSubscript:@"agree_duty"];

//   v83 = objc_retainAutoreleasedReturnValue(v82);
	  // v95 = _NSConcreteStackBlock;
	  // v96 = 3254779904LL;
	  // v97 = -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]_block;
	  // v98 = &unk_103C55890;
	  // v99 = v17;
	  // v100 = v2;
	  // v89 = _NSConcreteStackBlock;
//   v90 = 3254779904LL;
//   v91 = -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]_block_0;
//   v92 = &unk_103C558C0;
//   v84 = objc_retain(v17);
// objc_copyWeak(&v94, &v101);
//   v93 = v2;
//   objc_msgSend(v78, "checkHongbaoOpenLicense:acceptCallback:denyCallback:", v83, &v95, &v89);
	  [payLogic checkHongbaoOpenLicense:subScript acceptCallback:^(){
	  	  // __int64 v1; // x19
		  // void *v2; // x0
		  // void *v3; // x20
		  // void *v4; // x0
		  // void *v5; // x0
		  // void *v6; // x21

		  // v1 = a1;
		  // v2 = objc_msgSend(&OBJC_CLASS___MMServiceCenter, "defaultCenter");
		  // v3 = (void *)objc_retainAutoreleasedReturnValue(v2);
		  // v4 = objc_msgSend(&OBJC_CLASS___WCRedEnvelopesLogicMgr, "class");
		  // v5 = objc_msgSend(v3, "getService:", v4);
	 	 WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];


		  // v6 = (void *)objc_retainAutoreleasedReturnValue(v5);
		  // objc_msgSend(v6, "OpenRedEnvelopesRequest:", *(_QWORD *)(v1 + 32));
	 	 [RedEnvelopesLogicMgr OpenRedEnvelopesRequest:mutalbe_dic];
		  // objc_release(v6);
		  // objc_release(v3);
		  // *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL) = 4;
		  // return objc_msgSend(*(void **)(*(_QWORD *)(v1 + 40) + 73LL), "startReceiveAnimation");

	  }denyCallback:^(){
	  	[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]_block_0;	
	  }];

//   objc_release(v83);
//   objc_release(v81);
//   objc_release(v78);
//   objc_release(v75);
//   objc_destroyWeak(&v94);
//   objc_release(v99);
//   objc_release(v84);
//   objc_destroyWeak(&v101);
//   objc_release(v68);
//   objc_release(v85);
//   objc_release(v86);
//   objc_release(v87);
//   objc_release(v88);
// }