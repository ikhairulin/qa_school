/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	lr_start_transaction("01_get_start_url");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("mail.ru", 
		"URL=https://mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/static/fonts/MailSans/WOFF2/MailSansVariative.woff2", ENDITEM, 
		"Url=https://top-fwz1.mail.ru/js/code.js", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/@mail-core/logger-preset/home.js?&v13.3.1&pv=13.3.1&f=1694542680000-0", ENDITEM, 
		"Url=https://img.imgsmail.ru/hb/e.mail.ru/auth.gate/2.10.0/authGate.js?onload=__AG_onload", ENDITEM, 
		"Url=https://limg.imgsmail.ru/pkgs/whiteline/2.138.3/external.modern.js", ENDITEM, 
		"Url=https://pogoda.imgsmail.ru/icons/status/2021/lt/svg/01.svg", ENDITEM, 
		"Url=https://pogoda.imgsmail.ru/icons/status/2021/lt/svg/05.svg", ENDITEM, 
		"Url=https://pogoda.imgsmail.ru/icons/status/2021/lt/svg/06.svg", ENDITEM, 
		"Url=https://bar.love.mail.ru/jsonp/bar?&_=1695475213800", ENDITEM, 
		"Url=https://home.imgsmail.ru/resplash/191759/i/meta/favicon.ico", ENDITEM, 
		"Url=https://ad.mail.ru/static/ads-async.js", ENDITEM, 
		LAST);

	web_url("adp", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=15&json=1&p=resplash&q=917709&isDarkTheme=0&rb_doodle=&notgb=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NaviData", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&target=1&_=1694839923763", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.76\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAECZPO7Ac3dZBX7XmG0JzcGzgAB1PyH5ILmF8hTkNztUv5Tv6d+iGJ1kRxGqoNrM40rnSmaDd/zHEzxDzHc7+KoXiHQ5Q3g1FosbiedHjq3OGK93COpCGAn2KHTpLaLlUtAaOBrWhvpkuIFhCEXGoh37e+yMjUsgGl/"
		"bAztowusf5FvMX6cdqbM2JYHhO64nhVHwjYYExoJqwM3s3S6ZSUDz8DfYTx0c9HVV9Jr5Sx9Fl74e5P2ARDVxyy4KXPYHHjtC/wn1w1D+/dyvGiQG4CpvHZWQm3ER3H/hMsaFphYOokkBdbfJDGQJVUKgx4SXvyx0oIAE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"116.0.1938.76 (Official build) \"},\"client\":{\"version\""
		":281483717771270,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638301352347115155\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://yandex.ru/portal/searchframe/desktop?theme=system&button=&mstatid=100000000&dark_theme=0\",\"ip\":null},\"referrer\":{\"uri\":\"https://mail.ru/\",\"ip\":null},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"5cd9d73c-5314-4617-a08e-edd23ced8c43\",\"synchronous\":false}", 
		LAST);

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_url("117521a101e5055530708050c541a0c4208665c09505d570701020c5c09050552", 
		"URL=https://mail.ru/res/117521a101e5055530708050c541a0c4208665c09505d570701020c5c09050552", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3_2", 
		"URL=https://data-edge.smartscreen.microsoft.com/api/browser/edge/data/bloomfilter/x/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAECZPO7Ac3dZBX7XmG0JzcGzgAB1PyH5ILmF8hTkNztUv5Tv6d+iGJ1kRxGqoNrM40rnSmaDd/zHEzxDzHc7+KoXiHQ5Q3g1FosbiedHjq3OGK93COpCGAn2KHTpLaLlUtAaOBrWhvpkuIFhCEXGoh37e+yMjUsgGl/bAztowusf5FvMX6cdqbM2JYHhO64nhVHwjYYExoJqwM3s3S6ZSUDz8DfYTx0c9HVV9Jr5Sx9Fl74e5P2ARDVxyy4KXPYHHjtC/wn1w1D+/dyvGiQG4CpvHZWQm3ER3H/hMsaFphYOokkBdbfJDGQJVUKgx4SXvyx0oIAE=&p=\",\""
		"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"116.0.1938.76 (Official build) \"},\"client\":{\"version\":281483717771270,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638301352347115155\",\"customSettings\":\""
		"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"correlationId\":\"5CD9D73C-5314-4617-A08E-EDD23CED8C43\"}", 
		LAST);

	web_url("widgets_pxt", 
		"URL=https://likemore-go.imgsmail.ru/widgets_pxt?p=widget_render&widget=cloud", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.ru/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("multimedia_pxt", 
		"URL=https://likemore-go.imgsmail.ru/multimedia_pxt?doc_id=145599268972324002&meta_info=eNrjYnBi4mAAAAFgAFc%3D&meta_type=doc&platform=kino&qid=0d609d2e-9698-446a-88b4-5e1896e2fc7c&source_id=3678888710876365284&stream_id=lenta_main_mail_ru_mediaproject&title_position=1&url=https%3A%2F%2Fkino.mail.ru%2Fnews%2F58461_putin_raskril_kolichestvo_uehavshih_iz_rossii_artistov%2F%3Ffrom%3Dmr_news%26frommail%3Dft_ml&p=show", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.ru/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_url("multimedia_pxt_2", 
		"URL=https://likemore-go.imgsmail.ru/multimedia_pxt?doc_id=6509089039097503792&meta_info=eNrjYnBi4mAAAAFgAFc%3D&meta_type=doc&platform=health&qid=0d609d2e-9698-446a-88b4-5e1896e2fc7c&source_id=6600118591033920462&stream_id=lenta_main_mail_ru_mediaproject&title_position=1&url=https%3A%2F%2Fhealth.mail.ru%2Fnews%2Fuchenye_vyyasnili_kakaya_gruppa_krovi_chasche%2F%3Ffrommail%3Dft_ml&p=show", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.ru/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_url("multimedia_pxt_3", 
		"URL=https://likemore-go.imgsmail.ru/multimedia_pxt?doc_id=4082047570646557907&meta_info=eNrjYnBi4mAAAAFgAFc%3D&meta_type=doc&platform=sport&qid=0d609d2e-9698-446a-88b4-5e1896e2fc7c&source_id=5467704833012698134&stream_id=lenta_main_mail_ru_mediaproject&title_position=1&url=https%3A%2F%2Fsportmail.ru%2Fnews%2Ffigure-skating%2F57787619%2F%3Ffrommail%3Dft_ml&p=show", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.ru/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);

	web_url("multimedia_pxt_4", 
		"URL=https://likemore-go.imgsmail.ru/multimedia_pxt?doc_id=7503764515764002828&meta_info=eNrjYnBi4mAAAAFgAFc%3D&meta_type=doc&platform=sport&qid=0d609d2e-9698-446a-88b4-5e1896e2fc7c&source_id=5467704833012698134&stream_id=lenta_main_mail_ru_mediaproject&title_position=1&url=https%3A%2F%2Fsportmail.ru%2Fnews%2Ffootball-foreign%2F57793703%2F%3Ffrommail%3Dft_ml&p=show", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.ru/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("vkAuth.html", 
		"URL=https://ad.mail.ru/dist/vkAuth.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.ru/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adp_2", 
		"URL=https://ad.mail.ru/adp/?q=1241629&pid=146&version=horizontal&vk=0&data-ad-chunk=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:rgj9xEUq6LY8KNGZVHcBApcPTi-ozBtHvDMjDA0xeTw&cup2hreq=73ef2ef70ae40c33c416119c001c70172dc458e248211b876fe17f0c54a6c0aa", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.01\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.01\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.01,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser"
		"\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.41\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.41\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.41,\"AppVersion\":\""
		"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.42\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.42\",\"AppMajorVersion\":\"116\",\""
		"AppRollout\":0.42,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.03\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.03\","
		"\"AppMajorVersion\":\"116\",\"AppRollout\":0.03,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.42\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.42\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.42,\"AppVersion\":\""
		"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.32\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.32\",\"AppMajorVersion\":\"116\",\""
		"AppRollout\":0.32,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.18\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.18\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.18,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.12\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8AA3F8BEEA3F8DFB32ECD478C874CA438D2EB07F78DECF5B0A7121C3557C45ED\"}]},\"ping\":{\"r\":-2"
		"},\"targetingattributes\":{\"AppCohort\":\"rrf@0.12\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.12,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"10.34.0.49\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.92\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.92\",\"AppMajorVersion\":\""
		"116\",\"AppRollout\":0.92,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.64\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.94F5B3A4C0895033D87F313223769323CE951CCC51960109807DA84CA3EEFED4\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.64\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.64,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.0.2.32\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.07\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.07\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.07,\"AppVersion\":\""
		"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.98\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.2BC302F76A4E272A833D6BF17EFDF9CFC48E12EF025ABABFCF2DF2D4F6459747\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.98\",\"AppMajorVersion\":\"116\",\""
		"AppRollout\":0.98,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2983\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.75\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0DB50494B994B55F9F816257EC371B55BA4E52689C03231B141B8D3FF1D394C3\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.75\",\""
		"AppMajorVersion\":\"116\",\"AppRollout\":0.75,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.0.0.4\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.55\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.F17C7E078969C5BA5E49FD7BA7A45540B464E347C0D7B8827673571EA5EBB94B\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":"
		"{\"AppCohort\":\"rrf@0.55\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.55,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2.0.5818.0\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.13\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.B9ADECE786F4D11A10DE9B5209714AD946EA87C7B1D9CD2C3CA8AE0D0486F036\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.13\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.13,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.20230912.1.0\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.49\",\"enabled\":true,\"lang\":\"ru\","
		"\"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.49\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.49,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.11\",\""
		"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.11\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.11,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\""
		"WULS\",\"cohort\":\"rrf@0.04\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.04\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.04,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":"
		"\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.25\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.25\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.25,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\""
		"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.58\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.78D3CAD27A3B5861173FB273DBA232D4677F86D3E1FE477E3B2A2DEEA5E69D47\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.58\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.58,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater"
		"\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"115.16236.16220.140\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.45\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.C1092FCD222EDFB14D8425498DFDBDA91571C17E48E0C1ABE169731BBF8094E7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.45\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.45,\"AppVersion\":\"116.0.1938.76\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.25\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.D1841099A7991456D26FF9911CEF149249E88EF9A25993329C88FDCF7CF45B4C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"116\",\""
		"AppRollout\":0.48,\"AppVersion\":\"116.0.1938.76\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2023.8.9.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"116.0.1938.76\",\"protocol\":\"3.1\",\"requestid\":\"{d6656b30-19c3-47e2-98a1-85321d5242fd}\",\"sessionid\":\"{eb6516dd-ef2b-481d-afe4-46f82048207e}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.177.11\"},\"updaterversion\":\"116.0.1938.76\"}}", 
		LAST);

	web_url("adp_3", 
		"URL=https://ad.mail.ru/adp/?_SITEZONE=15&json=1&p=resplash&q=917709&isDarkTheme=0&rb_doodle=&notgb=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("01_get_start_url",LR_AUTO);

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.55\",\"enabled\":true,\"event\":[{\"download_time_ms\":8194,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":12,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"2.0.5856.0\",\"previousversion\":\"2.0.5818.0\",\"total\":0,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"bc282934-c9b1-432a-8e73-0b7bcfa1a650?P1=1695144875&P2=404&P3=2&P4=VAWDSss1888KAEw7p2v%2feg4z8oaxTcyRtHTtS0hc0z%2bJbzRwVN%2fBYsRaclQbqEWm9CWT1noKw1QGm%2bt9vAqs0g%3d%3d\"},{\"errorcat\":1,\"errorcode\":12,\"eventresult\":0,\"eventtype\":3,\"nextfp\":\"1.2544A080CF116D395EAC458D6190EBB429B80FD90B9BDA203434C1FEE5B6723A\",\"nextversion\":\"2.0.5856.0\",\"previousfp\":\"1.F17C7E078969C5BA5E49FD7BA7A45540B464E347C0D7B8827673571EA5EBB94B\",\"previousversion\":\"2.0.5818.0\"}],\"lang\":\"ru\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.F17C7E078969C5BA5E49FD7BA7A45540B464E347C0D7B8827673571EA5EBB94B\"}]},\"version\":\"2.0.5818.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"116.0.1938.76\",\"protocol\":\"3.1\",\"requestid\""
		":\"{e1729f34-0b12-4973-bdf7-7330d8c7b587}\",\"sessionid\":\"{eb6516dd-ef2b-481d-afe4-46f82048207e}\",\"updaterversion\":\"116.0.1938.76\"}}", 
		LAST);

	return 0;
}
