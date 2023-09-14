vuser_end()
{

	lr_think_time(4);

	lr_start_transaction("06_logout");

	web_url("NaviData_7", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&gamescnt=1&Login=petya.nikolayev.989%40mail.ru&_=1694581118436", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		LAST);

	web_url("smart_6", 
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1694542970&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email=petya.nikolayev.989%40mail.ru&htmlencoded=false&token=43e9d5bd0703c489ba2b530cd27a7ea6"
		":slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0&_=1694542990483", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("update_10", 
		"Action=https://e.mail.ru/api/v1/helpers/update", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=index", "Value=365", ENDITEM, 
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM, 
		"Name=email", "Value=petya.nikolayev.989@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=token", "Value=43e9d5bd0703c489ba2b530cd27a7ea6:slSWBGQD1wQqcGORgZbv9ssqlmtB7Fg6BT0nJBYkNcN7InRpbWUiOjE2OTQ1NDI5MTIsInR5cGUiOiJjc3JmIiwibm9uY2UiOiI0NTI2ZjQ1MTY5ZDY4YmYzIn0", ENDITEM, 
		LAST);

	web_url("NaviData_8", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login=petya.nikolayev.989%40mail.ru&_=1695322696058", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		LAST);

	web_url("logout", 
		"URL=https://auth.mail.ru/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://e.mail.ru/", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://bar.love.mail.ru/jsonp/bar?&_=1695518328448", "Referer=https://mail.ru/", ENDITEM, 
		LAST);

	web_custom_request("3_5", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.76\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAECZPO7Ac3dZBX7XmG0JzcGzgAB1PyH5ILmF8hTkNztUv5Tv6d+iGJ1kRxGqoNrM40rnSmaDd/zHEzxDzHc7+KoXiHQ5Q3g1FosbiedHjq3OGK93COpCGAn2KHTpLaLlUtAaOBrWhvpkuIFhCEXGoh37e+yMjUsgGl/"
		"bAztowusf5FvMX6cdqbM2JYHhO64nhVHwjYYExoJqwM3s3S6ZSUDz8DfYTx0c9HVV9Jr5Sx9Fl74e5P2ARDVxyy4KXPYHHjtC/wn1w1D+/dyvGiQG4CpvHZWQm3ER3H/hMsaFphYOokkBdbfJDGQJVUKgx4SXvyx0oIAE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"116.0.1938.76 (Official build) \"},\"client\":{\"version\""
		":281483717771270,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638301387784447596\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://mail.ru/?from=logout\",\"ip\":null},\"referrer\":{\"uri\":\"https://e.mail.ru/\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"0dcfcbac-4db9-45cd-83e7-75632a35abef\",\"synchronous\":false}", 
		LAST);

	web_url("117521a101e5055530708050c541a0c4208665c09505d560e010b0c5509080351", 
		"URL=https://mail.ru/res/117521a101e5055530708050c541a0c4208665c09505d560e010b0c5509080351", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/?from=logout", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NaviData_9", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&target=1&_=1694885735225", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_14", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=15&json=1&p=resplash&q=917709&isDarkTheme=0&fid=3109c5f5fbf5ff5fa07bed868ec20b8c&rb_doodle=&notgb=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		LAST);

	web_url("multimedia_pxt_5", 
		"URL=https://likemore-go.imgsmail.ru/multimedia_pxt?doc_id=6847710359776648273&meta_info=eNoBJQDa%2FwoCEAFCHwi%2FvYXxnvOOzFwQqf3mqZYHGJbqs42z3svzcCgZMAE4NxGr&meta_type=doc&platform=hi-tech&qid=8d5fd7c1-7134-4fdd-aa8f-59f7a8c50c52&source_id=6115257028045650506&stream_id=lenta_main_mail_ru_mediaproject&title_position=7099&uh_vid=qb45ZTkAAAA%3D&url=https%3A%2F%2Fhi-tech.mail.ru%2Freview%2F102537-rossiyane-skupayut-audiokassety%2F%3Ffrommail%3Dft_ml&user_id=6672148380260589247&p=show", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.ru/", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		LAST);

	web_url("widgets_pxt_2", 
		"URL=https://likemore-go.imgsmail.ru/widgets_pxt?p=widget_render&widget=cloud&vid=MWJFUndmMU9nMjJLMDAwMDB2MW9UNDJLOjo6YTFiMDRlMC0wLTAtYTFiMDQ5ZjpDQUFTRUwwZGhLS1RNLXI4ZjY2WGRqSTRVUEFhWU9uWGIwR3E5ZjBQMzZ2OS1vdFh5TnMzNWdPTlhicG1rTDNndUtrZE0zMjJaSGNMRjVoa1dfVGRsa20yQlRDUG1NaTNFRVRmdzlwa3MtSVotb3h0VHVjdHlzZXJrZGNoS3BCSlgxeWNHRG1PUUprYWpaLWxad0lvai1OcWpqTmNkZw%3D%3D", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.ru/", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_15", 
		"URL=https://ad.mail.ru/adp/?q=1241629&pid=146&version=horizontal&vk=0&data-ad-chunk=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://edge.microsoft.com/extensionrevocation/v1/threatListUpdates_fetch?req=ChcKBm1zZWRnZRINMTE2LjAuMTkzOC43NhobCAEQCBoNMTY5NDUzNTA2MDk3MSIEIAEgAigEIgIIAQ==&ct=application/x-protobuf&key=d414dd4f9db345fa8003e32adc81b362", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("06_logout",LR_AUTO);

	lr_start_transaction("07_close_window");

	web_url("adp_16", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=15&json=1&p=resplash&q=917709&q=998963&q=217&q=4015&isDarkTheme=0&fid=3109c5f5fbf5ff5fa07bed868ec20b8c&rb_doodle=&notgb=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("07_close_window",LR_AUTO);

	return 0;
}