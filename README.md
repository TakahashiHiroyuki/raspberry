wiringPiをインストール
$ sudo apt-get install git
$ git clone git://git.drogon.net/wiringPi
$ cd wiringPi
$ ./build

コマンドを実行
$ cd ..
$ gcc -o LED LED.c -lwiringPi
$ sudo ./LED
