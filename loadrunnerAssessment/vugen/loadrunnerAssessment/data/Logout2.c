Logout2()
{

	lr_start_transaction("logout2trans");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("logout", 
		"URL=https://demowebshop.tricentis.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("logout2trans",LR_AUTO);

	return 0;
}