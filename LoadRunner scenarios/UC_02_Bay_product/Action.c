Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	/*web_set_user("{user}", "{password}", 
		"www.advantageonlineshopping.com:443");*/

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_cookie("_ga=GA1.1.11664964.1731134734; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1731134734.1.0.1731134734.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.2.11664964.1731134734; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.2123636272.1731134736; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731134736.1.1.1731134738.58.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731134736.1.1.1731134808.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731134736.1.1.1731134961.25.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com_2", 
		"URL=http://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
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
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2300", ENDITEM, 
		"Url=/css/images/category_banner_2.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2200", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2201", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Check.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

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
		"Snapshot=t4.inf", 
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
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("all_category"), "random_category");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731134736.1.0.1731134736.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("search", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	/*web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);*/
	
	lr_think_time(5);

	lr_start_transaction("UC_02_TR_01_LogIn");

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
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>{password}</loginPassword><loginUser>{user}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731134736.1.1.1731134771.25.0.0; DOMAIN=www.advantageonlineshopping.com");
	
	web_add_auto_header("Authorization", "Basic {token}");

	web_url("userid", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/{userid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC_02_TR_01_LogIn",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC_02_TR_02_Pick_category");
	
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
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("all_products"), "random_products");

	web_url("attributes", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC_02_TR_02_Pick_category",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC_02_TR_03_Pick_product");
	
	web_reg_save_param_json(
		"ParamName=all_color",
		"QueryString=$..code",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);

	web_url("15", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/products/{random_products}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("all_color"), "random_color");

	web_url("all_data", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/2/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC_02_TR_03_Pick_product",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC_02_TR_04_Add_to_cart");
	
	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");
	
	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddToCart");
	
	web_submit_data("AddToCart", 
		"Action=http://www.advantageonlineshopping.com/order/api/v1/carts/{userid}/product/{random_products}/color/{random_color}?quantity={quantity}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=C7DFC060C172F1930E981F9AD4B5BDBF", ENDITEM, 
		LAST);

	lr_end_transaction("UC_02_TR_04_Add_to_cart",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC_03_TR_05_Go_to_orders");

	web_url("927722938_2", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/{userid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC_03_TR_05_Go_to_orders",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC_02_TR_06_Bay_product");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731134736.1.1.1731134926.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>927722938</accountId><base64Token>Basic ZWVBRVRzZXR3MzU6c3JnSEp0NDIz</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>927722938</accountId><base64Token>Basic ZWVBRVRzZXR3MzU6c3JnSEp0NDIz</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("927722938_3", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/{userid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_custom_request("shippingcost", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"\",\"addressLine2\":\"\",\"city\":\"\",\"country\":\"us\",\"postalCode\":\"\",\"state\":\"\"},\"secustomerName\":\"eeAETsetw35 \",\"secustomerPhone\":\"\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"C7DFC060C172F1930E981F9AD4B5BDBF\"}", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>927722938</accountId><base64Token>Basic ZWVBRVRzZXR3MzU6c3JnSEp0NDIz</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceUpdateSafePayMethodRequest");

	lr_think_time(5);

	web_custom_request("UpdateSafePayMethodRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/UpdateSafePayMethodRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>927722938</userId><safePayUsername>eeAETsetw35</safePayUsername><safePayPassword>srgHJt423</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic "
		"ZWVBRVRzZXR3MzU6c3JnSEp0NDIz</base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_custom_request("927722938_4", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/orders/users/{userid}", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"srgHJt423\",\"Transaction_SafePay_UserName\":\""
		"eeAETsetw35\",\"Transaction_TransactionDate\":\"9112024\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"\",\"Shipping_Address_City\":\"\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"eeAETsetw35 \",\"Shipping_Address_CustomerPhone\":\"\",\"Shipping_Address_PostalCode\":\"\",\"Shipping_Address_State\":\"\",\"Shipping_Cost\":179.99,\"Shipping_NumberOfProducts\":1,\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\""
		"hexColor\":\"414141\",\"productId\":15,\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731134736.1.1.1731134990.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_custom_request("927722938_5", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/{userid}", 
		"Method=DELETE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC_02_TR_06_Bay_product",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC_02_TR_07_LogOut");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1731134734.1.1.1731135016.0.0.0; DOMAIN=www.advantageonlineshopping.com");

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
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{userid}</loginUser><base64Token>Basic {token}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("UC_02_TR_07_LogOut",LR_AUTO);

	return 0;
}