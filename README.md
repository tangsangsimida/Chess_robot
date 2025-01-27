# Chess_robot

## 软件安装包资源：

[Proteus Professional 8.17](https://pan.baidu.com/s/1pGjJZUcwNZT95wtJOwflvw?pwd=1pk1)	提取码：1pk1 

[Keil5_MDK](https://pan.baidu.com/s/1efL4jIY53QlUfjmH0rHuOQ)    提取码：e3p4

[Stm32_cube_prammer](https://pan.baidu.com/s/1LeM5aNQnrarYv80Huv2ZUw?pwd=phv4)    提取码：phv4

[Stm32_Cube_MX](https://pan.baidu.com/s/1_kpAkZJksgmdiK_6agOe4A?pwd=sq8t)    提取码：sq8t

## 主控板电路规划：
1. 主控：STM32F103C8T6
2. 电机驱动：A4988模块
3. 主控板电源：TPS5430DDRA--->12V-5VDCDC
4. 主控板接口详解：
   1. 12V电源XT30接口
   2. 电机焊盘接口1x4x2
   3. 舵机PWM控制接口-焊盘x1
   4. 吸盘驱动信号接口焊盘x2
   5. 电源扩展接口5V-3V-GND 焊盘1x4x3

## 

## 硬件开发规划：

1. 验证新版12-5Vdcdc电路
2. 验证a4988驱动可用性
3. 开始程序设计



## 程序设计规划：

1. 设计led闪烁程序验证开发板是否可行
2. 设计a4988驱动单个电机程序验证驱动与卡发板的可行性
3. 设计串口相关通信接口实现与电脑上位机的交互
4. 设计多电机运动系统
