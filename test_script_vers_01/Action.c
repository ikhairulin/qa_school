Action()
{

	int i;
	
	lr_start_transaction("01_get_start_url");

	web_set_sockets_option("SSL_VERSION", "AUTO");

/*Correlation comment: Automatic rules - Do not change!  
Original value='0f24b1b822ba44e0b9a63b7466086329' 
Name ='act_token' 
Type ='Rule' 
AppName ='Mail.ru' 
RuleName ='act_token'*/
	web_reg_save_param_regexp(
		"ParamName=act_token",
		"RegExp=\"?(?:act|CSRF|csrf)(?:Token)?\"?(?:=|:)\\s?\"?(.*?)\"?[,;}]",
		LAST);

	web_url("mail.ru", 
		"URL=https://mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t122.inf", 
		"Mode=HTML");

	web_reg_find("Search=Body",
	            "Text=Регистрация",
	            LAST);

	lr_end_transaction("01_get_start_url",LR_AUTO);
	
	lr_start_transaction("02_login");

	web_url("login",
		"URL=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.ru/",
		"Snapshot=t140.inf",
		"Mode=HTML",
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

//	web_custom_request("init",
//		"URL=https://account.mail.ru/api/v1/auth/qr/init?login=&page=https%3A%2F%2Fmail.ru%2F&redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fapp_id_mytracker%3D58519%26authid%3Dlmgn291q.7vi%26back%3D1%26dwhsplit%3Ds10273.b1ss12743s%26from%3Dlogin%26x-login-auth%3D1&source=polling",
//		"Method=POST",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact",
//		"Snapshot=t142.inf",
//		"Mode=HTML",
//		"EncType=",
//		LAST);
//
//	web_custom_request("polling",
//		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_aZ5lQJNxYDVgu2jU4XdMt&sign=3Vefr5HCoOdKzqD6Ow_9vXRDRix9NOerJwz8g0zTDHpWHee4C_RqVINYLv4oiqNk6vGYfqGPrebhRachS5ZXB4w=",
//		"Method=POST",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact",
//		"Snapshot=t143.inf",
//		"Mode=HTML",
//		"EncType=",
//		LAST);

	web_submit_data("info", 
		"Action=https://auth.mail.ru/api/v1/pushauth/info", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value={login}@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=referrer", "Value=https://mail.ru/", ENDITEM, 
		LAST);

//	web_custom_request("init_2",
//		"URL=https://account.mail.ru/api/v1/auth/qr/init?login={login}@mail.ru&page=https%3A%2F%2Fmail.ru%2F&redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fapp_id_mytracker%3D58519%26authid%3Dlmgn291q.7vi%26back%3D1%26dwhsplit%3Ds10273.b1ss12743s%26from%3Dlogin%26x-login-auth%3D1&source=polling",
//		"Method=POST",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact",
//		"Snapshot=t145.inf",
//		"Mode=HTML",
//		"EncType=",
//		LAST);
//
//	web_custom_request("polling_2",
//		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_StnOKxwlYLiNMXFb6VhHr&sign=8wz0IR9q8zl9FGZUrhu2AiMBYE-QhNiVFSvcU2f8BIF9UVV3vrzICWSfN9NdrTtSdqKiXVIkuH21Z_EmjwaXRmw=",
//		"Method=POST",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact",
//		"Snapshot=t146.inf",
//		"Mode=HTML",
//		"EncType=",
//		LAST);

	web_submit_data("auth",
		"Action=https://auth.mail.ru/cgi-bin/auth?from=navi",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://account.mail.ru/",
		"Snapshot=t150.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value={login}@mail.ru", ENDITEM,
		"Name=Login", "Value={login}@mail.ru", ENDITEM,
		"Name=password", "Value={pwd}", ENDITEM,
		"Name=Password", "Value={pwd}", ENDITEM,
		"Name=saveauth", "Value=1", ENDITEM,
		"Name=new_auth_form", "Value=1", ENDITEM,
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", ENDITEM,
		"Name=act_token", "Value={act_token}", ENDITEM,
		"Name=page", "Value=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1", ENDITEM,
		"Name=back", "Value=1", ENDITEM,
		"Name=lang", "Value=ru_RU", ENDITEM,
		LAST);

	web_url("inbox",
		"URL=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi",
		"Snapshot=t152.inf",
		"Mode=HTML",
		LAST);

//	web_custom_request("fp", 
//		"URL=https://r3.mail.ru/fp/?id=4890b7e46119182455d0e5342ecbc862", 
//		"Method=OPTIONS", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/octet-stream", 
//		"Referer=https://e.mail.ru/", 
//		"Snapshot=t154.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("fp_2", 
//		"URL=https://r3.mail.ru/fp/?id=4890b7e46119182455d0e5342ecbc862", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/octet-stream", 
//		"Referer=https://e.mail.ru/", 
//		"Snapshot=t156.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.76\",\"language\":\"ru\",\"colorDepth\":24,\"deviceMemory\":8,\"pixelRatio\":1,\"screenResolution\":\"1920;1080\",\"availableScreenResolution\":\"1920;1040\",\"timezone\":\"Europe/Moscow\",\"timezoneOffset\":-180,\"hasLocalStorage\":true,\"hasSessionStorage\":true,\"hasIndexedDb\":true,\"hasOpenDB\":true,\"hardwareConcurrency\":12,\"platform\":\""
//		"Win32\",\"dnt\":\"1\",\"touchSupport\":\"0;false;false\"}", 
//		LAST);

	web_url("smart",
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&pinned_limit=50&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542870475",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"Snapshot=t157.inf",
		"Mode=HTML",
		LAST);

	web_url("aliases",
		"URL=https://e.mail.ru/api/v1/aliases?email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542870473",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"Snapshot=t158.inf",
		"Mode=HTML",
		LAST);

	web_url("unread",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542872822",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"Snapshot=t159.inf",
		"Mode=HTML",
		LAST);

	web_url("smart_2",
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1694542045&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542872947",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t160.inf",
		"Mode=HTML",
		LAST);

	web_url("requests",
		"URL=https://e.mail.ru/api/v1/messages/search/requests?query=&limit=5&email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542873454",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t163.inf",
		"Mode=HTML",
		LAST);

	web_reg_find("Search=All",
		"Text=200",
		LAST);

	web_submit_data("update_5",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t166.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=index", "Value=365", ENDITEM,
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM,
		"Name=email", "Value={login}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0", ENDITEM,
		LAST);

		web_url("login_2",
		"URL=https://o2.mail.ru/login?client_id=b4c073bb6c5a4b1b84d2c7d2a1bceb9b&redirect_uri=https://e.mail.ru&lang=ru&scope=calendar.calendars.read%20calendar.events.read&response_type=token&mode=hidden&state=cid%3D1%26e%3D__mailru_oauth_1694542874416_0.5112705781299065__",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/",
		"Snapshot=t167.inf",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("02_login",LR_AUTO);


	lr_start_transaction("03_click_send_mail");

/*Correlation comment: Automatic rules - Do not change!  
Original value='43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0' 
Name ='token_1' 
Type ='Rule' 
AppName ='Mail.ru' 
RuleName ='json_token'*/
	web_reg_save_param_json(
		"ParamName=token_1",
		"QueryString=$.body.token",
		LAST);

	web_submit_data("short",
		"Action=https://e.mail.ru/api/v1/user/short",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t174.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=email", "Value={login}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0", ENDITEM,
		LAST);

	web_submit_data("update_6",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t175.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=index", "Value=365", ENDITEM,
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM,
		"Name=email", "Value={login}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token_1}", ENDITEM,
		LAST);

//	web_url("smart_3",
//		"URL=https://e.mail.ru/api/v1/ab/smart?fields=[%22id%22,%22emails%22,%22display_name%22,%22priority%22,%22nick%22,%22name%22]&simple=true&limit=16&email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910284",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
//		"Snapshot=t176.inf",
//		"Mode=HTML",
//		LAST);

//	web_url("smart_4",
//		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1694542875&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910395",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
//		"Snapshot=t177.inf",
//		"Mode=HTML",
//		LAST);

	web_url("security",
		"URL=https://e.mail.ru/api/v1/golang/user/security?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910517",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t178.inf",
		"Mode=HTML",
		LAST);

	web_url("short_2",
		"URL=https://e.mail.ru/api/v1/user/short?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910517",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t179.inf",
		"Mode=HTML",
		LAST);

	web_url("list",
		"URL=https://e.mail.ru/api/v1/user/social/bind/list?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910636",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t180.inf",
		"Mode=HTML",
		LAST);

	web_url("unread_2",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910750",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t181.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("03_click_send_mail",LR_AUTO);

	lr_start_transaction("04_send_mail");

/*Correlation comment: Automatic rules - Do not change!  
Original value='AG_z8JIH1laNSUFhZAMgYnuQ' 
Name ='cancellation_token' 
Type ='Rule' 
AppName ='Mail.ru' 
RuleName ='cancellation_token'*/
	web_reg_save_param_json(
		"ParamName=cancellation_token",
		"QueryString=$.body.cancellation_token",
		LAST);

/*Correlation comment - Do not change!  Original value='oCnA498u' Name ='id' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=id",
		"QueryString=$.body.id",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("send",
		"Action=https://e.mail.ru/api/v1/k8s/messages/send",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t183.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=ATTACHMENTS_RESTORE", "Value=true", ENDITEM,
		"Name=ATTACHMENTS_EXPIRATION_TIME", "Value=14400000", ENDITEM,
		"Name=id", "Value=d98Aa2B79CfB89Bf59fF5Fa77793C463", ENDITEM,
		"Name=source", "Value={\"draft\":\"\",\"reply\":\"\",\"forward\":\"\",\"schedule\":\"\"}", ENDITEM,
		"Name=headers", "Value={}", ENDITEM,
		"Name=template", "Value=0", ENDITEM,
		"Name=sign", "Value=0", ENDITEM,
		"Name=remind", "Value=0", ENDITEM,
		"Name=receipt", "Value=false", ENDITEM,
		"Name=subject", "Value=TESTTESTTEST", ENDITEM,
		"Name=priority", "Value=3", ENDITEM,
		"Name=send_date", "Value=", ENDITEM,
		"Name=body", "Value={\"html\":\"<div>TEST mail_01 {time}</div><div>&nbsp;</div><div data-signature-widget=\\\"container\\\"><div data-signature-widget=\\\"content\\\"><div>--<br>Петр Николаев<br>Отправлено из Почты <a href=\\\"https://trk.mail.ru/c/zzm979\\\">Mail.ru</a></div></div></div>\",\"text\":\"TEST mail_01\\n"
		"\\n"
		"\\n"
		"\\n"
		"Подпись\\n"
		"--\\n"
		"Петр Николаев\\n"
		"Отправлено из Почты Mail.ru\"}", ENDITEM,
		"Name=from", "Value=Петр Николаев <{login}@mail.ru>", ENDITEM,
		"Name=correspondents", "Value={\"to\":\"ikhairulin <ikhairulin@gmail.com>\",\"cc\":\"\",\"bcc\":\"\"}", ENDITEM,
		"Name=folder_id", "Value=", ENDITEM,
		"Name=triggerModelChangePlease", "Value=true", ENDITEM,
		"Name=compose_stat", "Value={\"user_track\":\"m|201|226|2|1;m|250|25|1|0;m|2040|147|1|1;m|16080|604|3|1;m|201|119|1|0;m|205|2|1|0;m|204|164|1|1;m|201|31|1|0;c|180|0|432|71;m|21|5|1|0;m|614|35|1|1;m|202|18|1|0;m|201|6|1|0;m|202|28|1|1;m|208|44|1|1;c|156|0|494|175;m|248|3|1|1;m|200|60|1|1;m|206|8|1|0;c|182|0|452|120;k|796|6;m|6348|1|1|1;m|205|3|1|1;m|408|3|1|1;m|202|14|1|1;m|201|52|1|1;m|201|104|1|1;m|203|16|1|0;m|204|5|1|0;m|202|2|1|0;m|203|34|1|1;m|204|3|1|0;m|203|5|1|1;m|203|3|1|0;c|168|0|479|123;m|32|2|1|0;k|45|4;m|162|72|1|1;m|203|82|1|1;c|181|0|374|237;m|21|3|1|0;k|153|4;m|47|5|1|1;m|206|5|1|0;c|86|0|378|244;k|69|4;m|255|6|1|1;k|713|9;k|1344|6;m|1599|80|1|1;m|1012|28|1|1;m|200|429|3|1;m|18268|132|1|1;m|201|510|3|1;m|206|141|1|0;m|204|59|1|0;c|195|0|349|726;m|14|3|1|0\",\"build\":\"release-fmail-21883.1970-01-03T05_30_35\",\"serverTime\":1693930713831}", ENDITEM,
		"Name=delay_for_cancellation", "Value=true", ENDITEM,
		"Name=attaches", "Value={\"list\":[]}", ENDITEM,
		"Name=email", "Value={login}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token_1}", ENDITEM,
		LAST);

	web_url("thread",
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id={id}&email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542967830",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t184.inf",
		"Mode=HTML",
		LAST);

	web_submit_data("update_7",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t185.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=index", "Value=365", ENDITEM,
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM,
		"Name=email", "Value={login}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token_1}", ENDITEM,
		LAST);

//	web_url("smart_5",
//		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542968032",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
//		"Snapshot=t187.inf",
//		"Mode=HTML",
//		LAST);

	lr_end_transaction("04_send_mail",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("05_logout");

//	web_url("smart_6",
//		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1694542970&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542990483",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
//		"Snapshot=t196.inf",
//		"Mode=HTML",
//		LAST);

	web_submit_data("update_10",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t197.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=index", "Value=365", ENDITEM,
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM,
		"Name=email", "Value={login}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token_1}", ENDITEM,
		LAST);

	web_url("logout", 
		"URL=https://auth.mail.ru/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("05_logout",LR_AUTO);
	
	return 0;
}
