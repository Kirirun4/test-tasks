Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
/*
	web_set_user("Lr_vuser2", 
		lr_unmask("67272579b6c4c4336c91cf8876"), 
		"www.advantageonlineshopping.com:80");
*/
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1730618394.1.1.1730618396.58.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1730618394.1.1.1730618575.3.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com", 
		"URL=http://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.1.283330333.1730618393; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1730618393.1.0.1730618393.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	web_reg_save_param_json(
		"ParamName=all_category",
		"QueryString=$..categoryId",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);

	web_url("categories", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("all_category"), "random_category");

	web_add_cookie("_ga=GA1.2.283330333.1730618393; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.1764569549.1730618394; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1730618394.1.0.1730618394.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("search", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/*web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);*/
	
	lr_think_time(5);

	lr_start_transaction("UC_01_TR_01_LogIn");

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	
	web_reg_save_param("token",
		"LB=t_authorization>",
		"RB=<",
		LAST);
	
	web_reg_save_param("userid",
		"LB=userId>",
		"RB=<",
		LAST);

	web_custom_request("AccountLoginRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>{password}</loginPassword><loginUser>{user}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1730618394.1.1.1730618518.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	
	web_add_auto_header("Authorization",	"Basic {token}");

	web_url("userid", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/{userid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	

	lr_end_transaction("UC_01_TR_01_LogIn",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC_01_TR_02_Pick_category");
	
	web_reg_save_param_json(
		"ParamName=all_products",
		"QueryString=$..productId",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);

	web_url("products", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/{random_category}/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("all_products"), "random_products");

	web_url("attributes", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC_01_TR_02_Pick_category",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC_01_TR_03_Pick_product");

	web_url("23", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/products/{random_products}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC_01_TR_03_Pick_product",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC_01_TR_04_LogOut");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1730618394.1.1.1730618620.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("AccountLogoutRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{userid}</loginUser><base64Token>Basic {token}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("UC_01_TR_04_LogOut",LR_AUTO);

	return 0;
}