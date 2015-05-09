# Note : DO THE FOLLOWING BEFORE RUNNING THE SCRIPT
# Step 1 : Go to Ubuntu Software Center --> Edit --> Software Sources
# Step 2 : Under Ubuntu Software tab, enable all the repositories
# except source code 
#          and click on download from 
# Step 3 : Select other from download drop down
# Step 4 : Now click on select best server
# Step 5 : You need to authenticate this with super user password.
# Step 6 : Once Ubuntu select best server for you click on chose
# server
# Step 7 : Now click on other software tab.
# Step 8 : Select Canonical Partners, Canonical Partners(Source code), 
#          Independent, Independent(source code)
# Step 9 : And click on close.

# vim 
sudo apt-get install vim

# vlc player 
sudo apt-get install vlc

# git  
sudo apt-get install git

#dock

echo -ne '\n' | sudo add-apt-repository ppa:cairo-dock-team/ppa
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install cairo-dock cairo-dock-plug-ins

#Screenlets
echo -ne '\n' | sudo apt-get install screenlets
echo -ne '\n' | sudo apt-get install screenlets-pack-all <<-EOF
Yes 
EOF 

#Mumble
echo -ne '\n' | sudo add-apt-repository ppa:mumble/release
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install mumble <<-EOF
Yes
EOF

#HexChat
echo -ne '\n' | sudo add-apt-repository ppa:gwendal-lebihan-dev/hexchat-stable
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install hexchat <<-EOF
Yes
EOF

#Shotwell
echo -ne '\n' | sudo add-apt-repository ppa:yorba/daily-builds
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install shotwell <<-EOF
Yes
EOF


#HomeBank
echo -ne '\n' | sudo add-apt-repository ppa:mdoyen/homebank
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install homebank <<-EOF
Yes
EOF

#Guake
echo -ne '\n' | sudo add-apt-repository ppa:webupd8team/unstable
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install guake <<-EOF
Yes
EOF

#Telegram
echo -ne '\n' | sudo add-apt-repository ppa:atareao/telegram
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install telegram <<-EOF
Yes
EOF

#Wine
echo -ne '\n' | sudo add-apt-repository ppa:ubuntu-wine/ppa
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install wine1.7 winetricks

#Uget
echo -ne '\n' | sudo apt-add-repository ppa:plushuang-tw/uget-stable
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install uget aria2

#Git
echo -ne '\n' | sudo add-apt-repository ppa:git-core/ppa
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install git

#BrightnessIndicator
echo -ne '\n' | sudo add-apt-repository ppa:indicator-brightness/ppa
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install indicator-brightness

#DustRac
echo -ne '\n' | sudo add-apt-repository ppa:jussi-lind/dustrac
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install dustrac

#SysMonitor
echo -ne '\n' | sudo add-apt-repository ppa:fossfreedom/indicator-sysmonitor
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install indicator-sysmonitor

#Battle for Wesnoth 1.13.0
echo -ne '\n' | sudo apt-get install cmake
wget
echo -ne '\n' | sourceforge.net/projects/wesnoth/files/wesnoth-1.13/wesnoth-1.12/wesnoth-1.12.tar.bz2
tar -xjvf wesnoth-1.13.tar.bz2
cd wesnoth-1.13.0
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=release ..
make
echo -ne '\n' | sudo make install

#PacketFence 
echo -ne '\n' | sudo apt-get install gdebi
wget
http://www.packetfence.org/downloads/PacketFence/debian/pool/precise/p/packetfence/packetfence_5.0.0_all.deb
echo -ne '\n' | sudo gdebi packetfence_5.0.0_all.deb

#Pinta - Paint Application
echo -ne '\n' | sudo add-apt-repository ppa:pinta-maintainers/pinta-stable
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install pinta

#Gimp - Alternative to Photoshop
echo -ne '\n' | sudo add-apt-repository ppa:otto-kesselgulasch/gimp
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install gimp

#Audacity
echo -ne '\n' | sudo add-apt-repository ppa:audacity-team/daily
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install audacity

#Imagination - To turn picture into video slide
echo -ne '\n' | sudo apt-get install imagination

#KdenLive - To edit videos
echo -ne '\n' | sudo add-apt-repository ppa:sunab/kdenlive-release
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install kdenlive

#Bombano - Software to write video files as dvd
echo -ne '\n' | sudo add-apt-repository -y ppa:jacob/media
echo -ne '\n' | sudo apt-get update; sudo apt-get install bombono-dvd

#K3B - DVD burning utility
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install k3b

#Conky Manager - To edit desktop gadgets
echo -ne '\n' | sudo add-apt-repository ppa:teejee2008/ppa
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install conky-manager
#sudo apt-get remove conky-manager

#Simple Video Recorder - To screen capture and record as video
echo -ne '\n' | sudo add-apt-repository ppa:maarten-baert/simplescreenrecorder
echo -ne '\n' | sudo apt-get update
echo -ne '\n' | sudo apt-get install simplescreenrecorder



#skype
#sudo apt-get install libqt4-dbus libqt4-network libqt4-xml libasound2
#wget http://www.skype.com/go/getskype-linux-beta-ubuntu-64
#sudo dpkg -i getskype-*
#sudo apt-get -f install


# OpenShot
#sudo apt-get update
#sudo apt-get upgrade
#sudo apt-get install openshot

# PiTiVi
#sudo apt-get install pitivi

# calendar indicator
#sudo add-apt-repository ppa:atareao/atareao
#sudo apt-get update
#sudo apt-get install calendar-indicator

# variety wallpaper changer
#sudo add-apt-repository ppa:peterlevi/ppa
#sudo apt-get update
#sudo apt-get install variety

# Tweak Unity
#sudo apt-get install unity-tweak-tool

# Get Firefox to support H.264
#sudo add-apt-repository ppa:mc3man/trusty-media
#sudo apt-get update
#sudo apt-get install gstreamer0.10-ffmpeg

# Fix Skype not using the correct system theme on 64bit
#sudo apt-get install gtk2-engines-murrine:i386
gtk2-engines-pixbuf:i386

# Fix missing Skype tray icon / appindicator on Ubuntu 64bit
#sudo apt-get install sni-qt:i386



