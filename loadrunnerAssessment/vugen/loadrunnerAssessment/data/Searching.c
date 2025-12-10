Searching()
{

	lr_start_transaction("searchtrans");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("searchtermautocomplete", 
		"URL=https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=fiction", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/registerresult/1", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://demowebshop.tricentis.com/search?q=fiction", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/registerresult/1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("searchtrans",LR_AUTO);

	return 0;
}
