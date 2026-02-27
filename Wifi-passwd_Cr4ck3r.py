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
    
