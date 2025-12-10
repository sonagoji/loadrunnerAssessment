AddToCart()
{

	lr_start_transaction("carttrans");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(20);

	web_custom_request("1", 
		"URL=https://demowebshop.tricentis.com/addproducttocart/catalog/45/1/1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/search?q=fiction", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("carttrans",LR_AUTO);

	return 0;
}
