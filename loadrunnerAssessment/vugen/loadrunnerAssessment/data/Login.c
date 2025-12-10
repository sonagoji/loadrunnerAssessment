Login()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("logintrans");

	web_link("Log in", 
		"Text=Log in", 
		"Snapshot=t12.inf", 
		LAST);

	web_submit_data("login", 
		"Action=https://demowebshop.tricentis.com/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Email", "Value=havuu@gmail.com", ENDITEM, 
		"Name=Password", "Value=123456", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	lr_end_transaction("logintrans",LR_AUTO);

	return 0;
}
