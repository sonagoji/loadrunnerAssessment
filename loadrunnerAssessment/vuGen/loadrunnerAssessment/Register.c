Register()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("registertrans");

	web_link("Register", 
		"Text=Register", 
		"Snapshot=t4.inf", 
		LAST);

	lr_think_time(8);
	
	web_submit_data("register", 
		"Action=https://demowebshop.tricentis.com/register", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/register", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=__RequestVerificationToken", "Value=ZW6RTSQvD9Kxq7G8gZB8w5dWXEy1u6hSAu2I2SMDWujl5RIsyYpASYLTdCJ5IqjY-EYjXZ2YAE_F4jG6WWl6_l6d6qMtUcMO2Tdl444BgxU1", ENDITEM, 
		"Name=Gender", "Value=F", ENDITEM, 
		"Name=FirstName", "Value={fname}", ENDITEM, 
		"Name=LastName", "Value={lname}", ENDITEM, 
		"Name=Email", "Value={gmail}", ENDITEM, 
		"Name=Password", "Value={pass}", ENDITEM, 
		"Name=ConfirmPassword", "Value={cpass}", ENDITEM, 
		"Name=register-button", "Value=Register", ENDITEM, 
		LAST);

	lr_end_transaction("registertrans",LR_AUTO);

	return 0;
}
