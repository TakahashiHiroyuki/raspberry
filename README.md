wiringPiをインストール  
======================
'''
$ sudo apt-get install git  
$ git clone https://github.com/WiringPi/WiringPi.git  
$ cd /WiringPi/wiringPi  
$ sudo ./build    
'''

コマンドを実行  
==============
'''
$ cd ..   
$ gcc -o LED LED.c -lwiringPi 
$ sudo ./LED
'''
