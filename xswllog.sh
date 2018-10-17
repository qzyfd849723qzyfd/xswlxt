#!/bin/bash

cat *.log | sort | uniq -c

read -p "请输入你想要查找的字段:stu/class:" a

if [ $a = "stu" ]; then
	read -p "请输入 b:" b
	echo $(cat *.log | grep -c $b)
	read -p "请输入 d:" d
	if [ $(cat *.log | grep $b | grep -c $d) ]; then
		echo "存在!"
	else
		echo "不存在!"
	fi

else 
	read -p "请输入 c:" c
	echo $(cat *.log | grep -c $c )
	read -p "请输入 e:" e
	echo "0为存在,非0为不存在!"
	if [ $(cat *.log | grep $c | grep -c $e) ]; then
		echo "存在!"
	else 
		echo "不存在!"
	fi
fi
