Action()
{

	lr_think_time(7);

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.13\",\"enabled\":true,\"event\":[{\"download_time_ms\":4018,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":12,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"309.45824.1.0\",\"previousversion\":\"1.20230912.1.0\",\"total\":0,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice"
		"/files/51df1723-95bb-4efc-adb6-6253dc684765?P1=1695110091&P2=404&P3=2&P4=EtK2ZXchm%2fzxhv9Kl6ZKl6%2bke6LDK3422kqwEOSJIXMqrFRzyNRkWECR4GejjvWJ0TyUO9DmbBmm9LC3sbxxiw%3d%3d\"},{\"errorcat\":1,\"errorcode\":12,\"eventresult\":0,\"eventtype\":3,\"nextfp\":\"1.B9ADECE786F4D11A10DE9B5209714AD946EA87C7B1D9CD2C3CA8AE0D0486F036\",\"nextversion\":\"309.45824.1.0\",\"previousfp\":\"1.B9ADECE786F4D11A10DE9B5209714AD946EA87C7B1D9CD2C3CA8AE0D0486F036\",\"previousversion\":\"1.20230912.1.0\"}],\"installdate\":-1,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.B9ADECE786F4D11A10DE9B5209714AD946EA87C7B1D9CD2C3CA8AE0D0486F036\"}]},\"version\":\"1.20230912.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"116.0.1938.76\","
		"\"protocol\":\"3.1\",\"requestid\":\"{5d3e8cac-bd07-4f87-b75c-d461b86c8e2b}\",\"sessionid\":\"{eb6516dd-ef2b-481d-afe4-46f82048207e}\",\"updaterversion\":\"116.0.1938.76\"}}", 
		LAST);

	lr_start_transaction("02_login");

	web_url("login", 
		"URL=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.ru/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/static/fonts/MailSans/WOFF2/MailSansMedium.woff2", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/ru_RU/polyfills.js", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/pkgs/react.env/3.1.0/ru_RU/react-env.bundle.js", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/images/a3f29483c88e9351eaca.png", "Referer=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/css/login.css", ENDITEM, 
		"Url=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/images/0aa9d89c15214731ae5b.png", "Referer=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/css/login.css", ENDITEM, 
		"Url=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/images/a49e94957256bc7acc59.png", "Referer=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/css/login.css", ENDITEM, 
		LAST);

	web_url("NaviData_2", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&target=1&_=1694699742550", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/@mail-core/logger-preset/login.js?&v11.2.0&pv=11.2.0&f=1694542680000-0", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/vkui/5.4.1/2kit.js", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/pkgs/login.mail.ru/190898/ru_RU/login.js", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/set_c.js?_=0.45307960321413154", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=/Domains?v2=1&extra=1&_=1694542855549&callback=__jp0", "Referer=https://account.mail.ru/", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("init", 
		"URL=https://account.mail.ru/api/v1/auth/qr/init?login=&page=https%3A%2F%2Fmail.ru%2F&redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fapp_id_mytracker%3D58519%26authid%3Dlmgn291q.7vi%26back%3D1%26dwhsplit%3Ds10273.b1ss12743s%26from%3Dlogin%26x-login-auth%3D1&source=polling", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("polling", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_aZ5lQJNxYDVgu2jU4XdMt&sign=3Vefr5HCoOdKzqD6Ow_9vXRDRix9NOerJwz8g0zTDHpWHee4C_RqVINYLv4oiqNk6vGYfqGPrebhRachS5ZXB4w=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=https://img.imgsmail.ru/check_c_one.js?_=0.8422297203109657", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/check_c_two.js?_=0.6280988476539706", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIeCQsDi5f3ZGO0EgUN541ADhIFDf3zgxESBQ3OQUx6?alt=proto", "Referer=", ENDITEM, 
		"Url=https://vk.ru/domain.txt", "Referer=https://account.mail.ru/", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIeCTtqddD7nUsREgUN541ADhIFDf3zgxESBQ3OQUx6Eh4JCwOLl_dkY7QSBQ3njUAOEgUN_fODERIFDc5BTHo=?alt=proto", "Referer=", ENDITEM, 
		LAST);

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
		"Name=login", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=referrer", "Value=https://mail.ru/", ENDITEM, 
		EXTRARES, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIXCSEY29ewEa_PEgUN541ADhIFDc5BTHoSFwkmIR0Wa-QjmBIFDeeNQA4SBQ3OQUx6?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("init_2", 
		"URL=https://account.mail.ru/api/v1/auth/qr/init?login=petya.nikolayev.989@mail.ru&page=https%3A%2F%2Fmail.ru%2F&redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fapp_id_mytracker%3D58519%26authid%3Dlmgn291q.7vi%26back%3D1%26dwhsplit%3Ds10273.b1ss12743s%26from%3Dlogin%26x-login-auth%3D1&source=polling", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("polling_2", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_StnOKxwlYLiNMXFb6VhHr&sign=8wz0IR9q8zl9FGZUrhu2AiMBYE-QhNiVFSvcU2f8BIF9UVV3vrzICWSfN9NdrTtSdqKiXVIkuH21Z_EmjwaXRmw=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("adp_4", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=15&json=1&p=resplash&q=917709&isDarkTheme=0&rb_doodle=&notgb=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.76\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAECZPO7Ac3dZBX7XmG0JzcGzgAB1PyH5ILmF8hTkNztUv5Tv6d+iGJ1kRxGqoNrM40rnSmaDd/zHEzxDzHc7+KoXiHQ5Q3g1FosbiedHjq3OGK93COpCGAn2KHTpLaLlUtAaOBrWhvpkuIFhCEXGoh37e+yMjUsgGl/"
		"bAztowusf5FvMX6cdqbM2JYHhO64nhVHwjYYExoJqwM3s3S6ZSUDz8DfYTx0c9HVV9Jr5Sx9Fl74e5P2ARDVxyy4KXPYHHjtC/wn1w1D+/dyvGiQG4CpvHZWQm3ER3H/hMsaFphYOokkBdbfJDGQJVUKgx4SXvyx0oIAE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"116.0.1938.76 (Official build) \"},\"client\":{\"version\""
		":281483717771270,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638301387784447596\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi\",\"ip\":null},\"referrer\":{\"uri\":\"https://account.mail.ru/\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"733c87c9-277e-40f7-9401-9747de482d68\",\"synchronous\":false}", 
		LAST);

	web_custom_request("update_4", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.49\",\"enabled\":true,\"event\":[{\"download_time_ms\":4009,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":12,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"2.0.0.1\",\"previousversion\":\"1.1.0.6\",\"total\":0,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"98e5c67a-a86c-4a7d-81db-6975e766a36c?P1=1694585327&P2=404&P3=2&P4=fqf2Zu7JXcAhDW0nW80wkhQQ92Jf%2faJpEXLvn1bm4KwyiYF7o%2femyyf183%2fGrZg42R61UvxbktkaKkyOrM8PNw%3d%3d\"},{\"errorcat\":1,\"errorcode\":12,\"eventresult\":0,\"eventtype\":3,\"nextfp\":\"1.757A02D8CFF3BDE8E7394017BB88A716129B397DB1018F8243C6822FE09668C9\",\"nextversion\":\"2.0.0.1\",\"previousfp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\",\"previousversion\":\"1.1.0.6\"}],\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"version\":\"1.1.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"116.0.1938.76\",\"protocol\":\"3.1\",\"requestid\":\""
		"{acace6fe-897f-4328-b837-d7a7f6ae5de2}\",\"sessionid\":\"{eb6516dd-ef2b-481d-afe4-46f82048207e}\",\"updaterversion\":\"116.0.1938.76\"}}", 
		LAST);

	web_submit_data("auth", 
		"Action=https://auth.mail.ru/cgi-bin/auth?from=navi", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=Login", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=password", "Value=rOEoRIrii33*", ENDITEM, 
		"Name=Password", "Value=rOEoRIrii33*", ENDITEM, 
		"Name=saveauth", "Value=1", ENDITEM, 
		"Name=new_auth_form", "Value=1", ENDITEM, 
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", ENDITEM, 
		"Name=act_token", "Value=0f24b1b822ba44e0b9a63b7466086329", ENDITEM, 
		"Name=page", "Value=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1", ENDITEM, 
		"Name=back", "Value=1", ENDITEM, 
		"Name=lang", "Value=ru_RU", ENDITEM, 
		LAST);

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.76\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAECZPO7Ac3dZBX7XmG0JzcGzgAB1PyH5ILmF8hTkNztUv5Tv6d+iGJ1kRxGqoNrM40rnSmaDd/zHEzxDzHc7+KoXiHQ5Q3g1FosbiedHjq3OGK93COpCGAn2KHTpLaLlUtAaOBrWhvpkuIFhCEXGoh37e+yMjUsgGl/"
		"bAztowusf5FvMX6cdqbM2JYHhO64nhVHwjYYExoJqwM3s3S6ZSUDz8DfYTx0c9HVV9Jr5Sx9Fl74e5P2ARDVxyy4KXPYHHjtC/wn1w1D+/dyvGiQG4CpvHZWQm3ER3H/hMsaFphYOokkBdbfJDGQJVUKgx4SXvyx0oIAE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"116.0.1938.76 (Official build) \"},\"client\":{\"version\""
		":281483717771270,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638301387784447596\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://e.mail.ru/sdc?token=de9c92467c5c459a98eb8ab63e0d50b5\",\"ip\":null},\"referrer\":{\"uri\":\"https://account.mail.ru/\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"3164a1b7-0fbe-46c8-b333-2e3a3c3e3204\",\"synchronous\":false}", 
		LAST);

	web_url("inbox", 
		"URL=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img.imgsmail.ru/pkgs/react.env/3.1.0/ru_RU/react-env.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/themes.outsource/3.1.0/t6000/octavius/all.css", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/@mail-core/logger-preset/octavius.js?&v13.4.1&pv=13.4.1&f=1694542680000-0", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://ad.mail.ru/static/sync-loader.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/vkui/5.0.2/2kit.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/logo/logo_white.svg", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/logo/rebranding/vk_with_stroke_light.svg", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://limg.imgsmail.ru/pkgs/whiteline/2.138.3/external.crossnav.modern.js", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("NaviData_3", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login=petya.nikolayev.989%40mail.ru&target=1&_=1694906993957", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("fp", 
		"URL=https://r3.mail.ru/fp/?id=4890b7e46119182455d0e5342ecbc862", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://bar.love.mail.ru/jsonp/bar?&_=1694672341148", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/vkui/5.0.2/index.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://filin.mail.ru/pic?from=ph&email=petya.nikolayev.989%40mail.ru&width=45&height=45&name=petya.nikolayev.989%40mail.ru", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://filin.mail.ru/pic?from=ph&email=petya.nikolayev.989%40mail.ru&width=45&height=45&name=%D0%9F%D0%B5%D1%82%D1%80%20%D0%9D%D0%B8%D0%BA%D0%BE%D0%BB%D0%B0%D0%B5%D0%B2", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/initial-async-05dcee77f453ae8e910d.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/themes.outsource/3.1.0/ru_RU/all.config.js", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("NaviData_4", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login=petya.nikolayev.989%40mail.ru&_=1695203859182", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("fp_2", 
		"URL=https://r3.mail.ru/fp/?id=4890b7e46119182455d0e5342ecbc862", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.76\",\"language\":\"ru\",\"colorDepth\":24,\"deviceMemory\":8,\"pixelRatio\":1,\"screenResolution\":\"1920;1080\",\"availableScreenResolution\":\"1920;1040\",\"timezone\":\"Europe/Moscow\",\"timezoneOffset\":-180,\"hasLocalStorage\":true,\"hasSessionStorage\":true,\"hasIndexedDb\":true,\"hasOpenDB\":true,\"hardwareConcurrency\":12,\"platform\":\""
		"Win32\",\"dnt\":\"1\",\"touchSupport\":\"0;false;false\"}", 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/ductus/3.16.4/ductus-octavius.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/sounds/notifier/bell.mp3", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("smart", 
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&pinned_limit=50&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590"
		":jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542870475", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/serviceworker.js", "Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1", ENDITEM, 
		LAST);

	web_url("aliases", 
		"URL=https://e.mail.ru/api/v1/aliases?email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542870473", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_url("unread", 
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542872822", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/7550-62678b1c429469c53e00.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("smart_2", 
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1694542045&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590"
		":jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542872947", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/3778-33c102bcbd142d255b77.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=/sw_notifications.js", "Referer=https://e.mail.ru/serviceworker.js", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIQCTI1FWRzk7o-EgUNkWGVTg==?alt=proto", "Referer=", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/4834.css", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/9308-d063be71650d24960dbb.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/7732.css", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/7604-10462ec86db17b8f73fd.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/7732-c318888e4a1542f94edf.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/4073-d401981f9b97ae5ef8b6.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/2018-8bb72063e96551c9e739.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://filin.mail.ru/pic?user=petya.nikolayev.989@mail.ru&email=welcome@e.mail.ru&trust=true&sign=4c2ad92f647e4d822eccd8ae3fc10d8846583fc9&width=90&height=90&name=%D0%9F%D0%BE%D1%87%D1%82%D0%B0%20Mail.ru", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://filin.mail.ru/pic?user=petya.nikolayev.989@mail.ru&email=security@id.mail.ru&trust=true&sign=9465f10eb124d764e7f286fa719f0c1fbfb5aedc&width=90&height=90&name=Mail.ru", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/9009.css", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("adp_5", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542873334&version=octavius&count=1&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&"
		"DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&mail_event=login&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback="
		"directijockoipdze&isDarkTheme=0&q[]=216790.0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/9009-6abcb497c302fc694ee1.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIXCQZf0zno1NbzEgUNkWGVThIFDZFhlU4=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_url("adp_6", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542873334&version=octavius&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&"
		"DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&mail_event=login&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback="
		"directijockoipdze&isDarkTheme=0&q[]=2200&q[]=231758&q[]=244983&q[]=474898&q[]=943265", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/8907-b6204db03cb133e5acd6.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/renovator/5.1.0/ru_RU/renovator.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/4957-f824c54c85366ae18289.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("requests", 
		"URL=https://e.mail.ru/api/v1/messages/search/requests?query=&limit=5&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542873454", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NaviData_5", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login=petya.nikolayev.989%40mail.ru&_=1695259336250", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img.imgsmail.ru/set_c.js?_=0.11310101734587774", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("948435", 
		"URL=https://ad.mail.ru/adf/948435?_SITEID=105&_SITEZONE=10&version=octavius&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&"
		"DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&directLoadErrorCallback=directijockoipdze&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&rnd=644983467", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/2promo/13.0.0/ru_RU/2promo.octavius.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/2562-63cbc7acc3c074614d31.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/5962-5eee9b9960568176584e.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/check_c_one.js?_=0.24288194491675053", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/6816-489b6c61ee03f878b49b.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/check_c_two.js?_=0.38063851838676865", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_submit_data("update_5", 
		"Action=https://e.mail.ru/api/v1/helpers/update", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=index", "Value=365", ENDITEM, 
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0", ENDITEM, 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/9318-9a7169ab91dbc1303b7e.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/2onboarding/1.3.2/ru_RU/static/js/2onboarding.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-light-10.png", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-light-01.png", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-dark-10.png", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-light-00.png", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-dark-00.png", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-dark-01.png", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-dark-11.png", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://img.imgsmail.ru/static.promo/announcement/promo/onboarding2/onboarding-cat-light-11.png", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	lr_end_transaction("02_login",LR_AUTO);

	web_url("login_2", 
		"URL=https://o2.mail.ru/login?client_id=b4c073bb6c5a4b1b84d2c7d2a1bceb9b&redirect_uri=https://e.mail.ru&lang=ru&scope=calendar.calendars.read%20calendar.events.read&response_type=token&mode=hidden&state=cid%3D1%26e%3D__mailru_oauth_1694542874416_0.5112705781299065__", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("graphql", 
		"URL=https://corsapi.imgsmail.ru/calendar/graphql", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("graphql_2", 
		"URL=https://corsapi.imgsmail.ru/calendar/graphql", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"operationName\":\"FetchCalendars\",\"variables\":{},\"query\":\"query FetchCalendars {\\n  calendars(onlyAccepted: true) {\\n    uid\\n    isDefault\\n    __typename\\n  }\\n}\\n\"}", 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/4260-26c9f6c9d8dd22ae10cd.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/4709-513a8902e005b0b56e0a.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/8524-c3d70172084d88159641.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/1836-129c485985d5719dfddd.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/4131-4c945edfeb41ab97dc11.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/2387-78ed061205caad95485c.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/4824-4c101ea0faad32199969.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/compose.mail.ru/38.0.8/ru_RU/compose.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/2790-3d60c51ae69ab33b3c00.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("adp_7", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542905066&version=octavius&autoupdate=1&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor="
		"ffffff&DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback="
		"directijockoipdze&isDarkTheme=0&min_cpm=1&q[]=231758&q[]=474898", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_8", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542906436&version=octavius&autoupdate=1&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor="
		"ffffff&DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback="
		"directijockoipdze&isDarkTheme=0&min_cpm=1&q[]=231758", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_9", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542906640&version=octavius&autoupdate=1&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor="
		"ffffff&DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback="
		"directijockoipdze&isDarkTheme=0&q[]=231758", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_url("948435_2", 
		"URL=https://ad.mail.ru/adf/948435?_SITEID=105&_SITEZONE=10&autoupdate=1&version=octavius&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&DT_listButtonTextColor=333333&DT_listButtonBorderColor="
		"e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&directLoadErrorCallback=directijockoipdze&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&rnd=2972202037", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("03_click_send_mail");

	web_submit_data("short", 
		"Action=https://e.mail.ru/api/v1/user/short", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0", ENDITEM, 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/widgets-14446d3d73412e967b03.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/1759-da7e515a4c776618f036.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/5043-e190fccd79eb307bbadd.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/2550-e99a45c11ebd48916e45.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/5048-b7fe0c55c7793e8bd832.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/2708.css", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_submit_data("update_6", 
		"Action=https://e.mail.ru/api/v1/helpers/update", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=index", "Value=365", ENDITEM, 
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0", ENDITEM, 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/attach-dropdown-168e6c5f5dad087d2af2.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/5217-4bbb0bfe11e122628035.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/2708-ed24068d46978f42a59a.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://filin.mail.ru/pic?width=60&height=60&email=petya.nikolayev.989%40mail.ru&name=", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("smart_3", 
		"URL=https://e.mail.ru/api/v1/ab/smart?fields=[%22id%22,%22emails%22,%22display_name%22,%22priority%22,%22nick%22,%22name%22]&simple=true&limit=16&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542910284", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	web_url("smart_4", 
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1694542875&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6"
		":slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542910395", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/compose-emojilist/1.1.2/emoji-list.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIlCWqdk_4JFs0LEgUNkWGVThIFDaTLTs0SBQ2RYZVOEgUNkWGVTg==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_url("security", 
		"URL=https://e.mail.ru/api/v1/golang/user/security?email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542910517", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_url("short_2", 
		"URL=https://e.mail.ru/api/v1/user/short?email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542910517", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	web_url("list", 
		"URL=https://e.mail.ru/api/v1/user/social/bind/list?email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542910636", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		LAST);

	web_url("unread_2", 
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542910750", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("03_click_send_mail",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("04_prepare_mail");

	web_url("NaviData_6", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&gamescnt=1&Login=petya.nikolayev.989%40mail.ru&_=1695413538915", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://filin.mail.ru/pic?width=45&height=45&email=ikhairulin%40gmail.com&name=ikhairulin", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://filin.mail.ru/pic?width=45&height=45&email=ikhairulin%40gmail.com&name=", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIsCefZsp0dOFc3EgUNkWGVThIFDZFhlU4SBQ2ky07NEgUNkWGVThIFDZFhlU4=?alt=proto", "Referer=", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/7622-45ca16909aba0c3e96a9.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC43NhIQCYvEh-evAMPlEgUNpMtOzRIlCWqdk_4JFs0LEgUNkWGVThIFDaTLTs0SBQ2RYZVOEgUNkWGVTg==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("04_prepare_mail",LR_AUTO);

	lr_start_transaction("05_send_mail");

	web_submit_data("send", 
		"Action=https://e.mail.ru/api/v1/k8s/messages/send", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
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
		"Name=body", "Value={\"html\":\"<div>TEST mail_01</div><div>&nbsp;</div><div data-signature-widget=\\\"container\\\"><div data-signature-widget=\\\"content\\\"><div>--<br>Петр Николаев<br>Отправлено из Почты <a href=\\\"https://trk.mail.ru/c/zzm979\\\">Mail.ru</a></div></div></div>\",\"text\":\"TEST mail_01\\n\\n\\n\\nПодпись\\n--\\nПетр Николаев\\nОтправлено из Почты Mail.ru\"}", ENDITEM, 
		"Name=from", "Value=Петр Николаев <petya.nikolayev.989@mail.ru>", ENDITEM, 
		"Name=correspondents", "Value={\"to\":\"ikhairulin <ikhairulin@gmail.com>\",\"cc\":\"\",\"bcc\":\"\"}", ENDITEM, 
		"Name=folder_id", "Value=", ENDITEM, 
		"Name=triggerModelChangePlease", "Value=true", ENDITEM, 
		"Name=compose_stat", "Value={\"user_track\":\"m|201|226|2|1;m|250|25|1|0;m|2040|147|1|1;m|16080|604|3|1;m|201|119|1|0;m|205|2|1|0;m|204|164|1|1;m|201|31|1|0;c|180|0|432|71;m|21|5|1|0;m|614|35|1|1;m|202|18|1|0;m|201|6|1|0;m|202|28|1|1;m|208|44|1|1;c|156|0|494|175;m|248|3|1|1;m|200|60|1|1;m|206|8|1|0;c|182|0|452|120;k|796|6;m|6348|1|1|1;m|205|3|1|1;m|408|3|1|1;m|202|14|1|1;m|201|52|1|1;m|201|104|1|1;m|203|16|1|0;m|204|5|1|0;m|202|2|1|0;m|203|34|1|1;m|204|3|1|0;m|203|5|1|1;m|203|3|1|0;c|168|0|479|123;"
		"m|32|2|1|0;k|45|4;m|162|72|1|1;m|203|82|1|1;c|181|0|374|237;m|21|3|1|0;k|153|4;m|47|5|1|1;m|206|5|1|0;c|86|0|378|244;k|69|4;m|255|6|1|1;k|713|9;k|1344|6;m|1599|80|1|1;m|1012|28|1|1;m|200|429|3|1;m|18268|132|1|1;m|201|510|3|1;m|206|141|1|0;m|204|59|1|0;c|195|0|349|726;m|14|3|1|0\",\"build\":\"release-fmail-21883.1970-01-03T05_30_35\",\"serverTime\":1693930713831}", ENDITEM, 
		"Name=delay_for_cancellation", "Value=true", ENDITEM, 
		"Name=attaches", "Value={\"list\":[]}", ENDITEM, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0", ENDITEM, 
		EXTRARES, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/3225-14f1f04f68c44635f039.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		"Url=https://imgs2.imgsmail.ru/octavius/ru_RU/bundles/wp/5933-ef4d0438067b3515b2c8.bundle.js", "Referer=https://e.mail.ru/", ENDITEM, 
		LAST);

	web_url("thread", 
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id=oCnA498u&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542967830", 
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
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=index", "Value=365", ENDITEM, 
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0", ENDITEM, 
		LAST);

	web_url("adp_10", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542967963&version=octavius&exp_id=492&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&"
		"DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback=directijockoipdze&"
		"isDarkTheme=0&min_cpm=1&q[]=232186&q[]=244983&q[]=474898", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		LAST);

	web_url("smart_5", 
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6"
		":slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542968032", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("05_send_mail",LR_AUTO);

	lr_think_time(5);

	web_url("force", 
		"URL=https://e.mail.ru/api/v1/messages/delivery/force?cancellation_token=AG_z8JIH1laNSUFhZAMgYnuQ&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542976295", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("update_8", 
		"Action=https://e.mail.ru/api/v1/helpers/update", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=index", "Value=365", ENDITEM, 
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0", ENDITEM, 
		LAST);

	web_submit_data("update_9", 
		"Action=https://e.mail.ru/api/v1/helpers/update", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=index", "Value=365", ENDITEM, 
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0", ENDITEM, 
		LAST);

	web_url("adp_11", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542978299&version=octavius&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&"
		"DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback=directijockoipdze&"
		"isDarkTheme=0&min_cpm=1&q[]=231758&q[]=244983&q[]=474898", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_12", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542979635&version=octavius&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&"
		"DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback=directijockoipdze&"
		"isDarkTheme=0&min_cpm=1&q[]=231758", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_13", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=10&_SITEID=105&start_time=1694542979953&version=octavius&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_hoverColor=000000&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_textColor=000000&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&"
		"DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTextColor=000000&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&ponymode=0&in3paneMetathread=0&userid=petya.nikolayev.989%40mail.ru&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&directLoadErrorCallback=directijockoipdze&"
		"isDarkTheme=0&q[]=231758", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		LAST);

	web_url("948435_3", 
		"URL=https://ad.mail.ru/adf/948435?_SITEID=105&_SITEZONE=10&version=octavius&exp_id=492&h=3800&w=240&DT_isDarkTheme=false&DT_siteBgColor=ffffff&DT_urlColor=999999&DT_bg=ffffff&DT_bgHover=ffffff&DT_borderColor=ffffff&DT_titleColor=005bd1&DT_titleHoverColor=333333&DT_listBg=f0f5ff&DT_listBgHover=f0f5ff&DT_listBorderColor=ffffff&DT_listTitleColor=005BD1&DT_listTitleHoverColor=333333&DT_listTextColor=93969B&DT_listButtonBgColor=ffffff&DT_listButtonTextColor=333333&DT_listButtonBorderColor=e2e2e1&"
		"DT_listButtonBorderHoverColor=005BD1&DT_listButtonTextHoverColor=005BD1&DT_listButtonBgHoverColor=ffffff&DT_sentMsgOkBg=ffffff&DT_sentMsgOkBgHover=ffffff&DT_sentMsgOkBorderColor=ffffff&DT_sentMsgOkTitleColor=005bd1&DT_sentMsgOkTitleHoverColor=333333&directLoadErrorCallback=directijockoipdze&rounded=1&fid=4890b7e46119182455d0e5342ecbc862&rnd=2568053831", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
