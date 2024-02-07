#include <takiroboF1.h>

//HMC5883L(地磁気), MPU(ジャイロ), NONE(無し) から選択する
takiroboF1 robot;

void setup()
{
  Serial.begin(9600);
  robot.init();
  
}

void loop()
{
  if(robot.getBtn() == HIGH)
  {
    
  }
}

/*
ジャイロセンサMPU6050を使うとき4行目を次のようにする
takiroboF1 robot(MPU);

方向を指定する
FRONT: 前
RIGHT: 右
LEFT: 左
BACK: 後ろ

センサーの値を取得する関数
robot.getBtn() == HIGH/LOW: //ボタンの状態を取得する
robot.getLine(方向): //方向のラインセンサの値を取得する
robot.getIr(方向): //方向のボールセンサの値を取得する(何も指定しないと前になる。)
robot.getAzimuth():　//ジャイロセンサの値を取得する
  （電源をつけた時に向いている方向は0,反時計回りに0~-180,時計回りに0~180で記述）

モーターを動かす関数
robot.motor(左タイヤ, 右タイヤ); //モーターを動かす（-255~255の値を入れる）
robot.motor(タイヤ１,タイヤ２,タイヤ３); //モーターを個別に動かす（-255~255の値を入れる）
robot.omniControl(deg, spd, yaw); //ロボットを進ませる（角度,スピード,回転成分）

センサの値をパソコンのシリアルモニタに表示する関数
Serial.print(センサーの値を取得する関数);//改行しない
Serial.println(センサーの値を取得する関数);//改行する
*/