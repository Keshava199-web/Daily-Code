#simple password checker;
stored_password = 'password@123'

#for user IP
entered_password = input("Enter your password :")

#passwd match verifying;
if entered_password == stored_password:
    print("Access Granted!")
else:
    print("Access Denied!")
