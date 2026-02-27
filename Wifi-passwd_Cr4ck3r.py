#first import subps
import subprocess
#import reg ex 
import re

cmd_output = subprocess.run(["netsh", "wlan", "show", "profiles"], capture_output = True).stdout.decode()


#profile_names
profile_names = (re.findall("All User Profiles   : (.*)\r", cmd_output))

#wifi_list
wifi_list = list()

if len(profile_names) != 0:
  for name in profile_names:
    wifi_profile = {}
    profile_info_pass = subprocess.run(["netsh", "wlan", "show", "profile", name], capture_output = True).stdout.decode()
        #    We use the regular expression to only look for the absent cases so we can ignore them.
        if re.search("Security key           : Absent", profile_info_pass):
            continue
        else:
            #    Assign the ssid of the wifi profile to the dictionary.
            #wifi_profile["ssid"] = name
            wifi_profile = {"ssid" : name, "password" : None}
            #    These cases aren't absent and we should run the 
            #    "key=clear" command part to get the password.
            profile_info_pass = subprocess.run(["netsh", "wlan", "show", "profile", name, "key=clear"], capture_output = True).stdout.decode()
            #    Again run the regular expression to capture the 
            #    group after the : (which is the password).
            password = re.search("Key Content          : (.*)\r", profile_info_pass)
            #    Check if we found a password using the regular expression. 
            #    Some wifi connections may not have passwords.
            if password == None:
                wifi_profile["password"] = None
            else:
                #    We assign the grouping (where the password is contained) that 
                #    we are interested in to the password key in the dictionary.
                wifi_profile["password"] = password.group[1]
            #    We append the wifi information to the variable wifi_list.
            wifi_list.append(wifi_profile) 

for x in range(len(wifi_list)):
    print(wifi_list[x]) 
    
