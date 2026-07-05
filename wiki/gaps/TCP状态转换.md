---
type: gap
title: "TCP状态转换"
created: 2026-07-04
updated: 2026-07-04
tags:
  - gap
  - 408
  - 计算机网络
status: developing
related:
  - "[[TCP协议]]"
  - "[[TCP拥塞控制]]"
sources:
  - ".raw/408/选择题做题本/27王道《计网》选择题做题本【无间隔】2.24.pdf"
---

# TCP状态转换

## 知识点

TCP 连接建立和释放对应状态机转换，三次握手和四次挥手是高频题源。

## 出错场景

- 主动关闭方和被动关闭方状态混淆。
- TIME_WAIT 作用记错。
- SYN、FIN、ACK 标志含义混淆。

## 识别信号

题干出现 LISTEN、SYN_SENT、ESTABLISHED、FIN_WAIT、CLOSE_WAIT、TIME_WAIT。

## 解题流程

1. 先判断客户端/服务器，主动/被动。
2. 建立连接：SYN -> SYN+ACK -> ACK。
3. 释放连接：FIN -> ACK -> FIN -> ACK。
4. 主动关闭方进入 TIME_WAIT。

## 可复盘结论

TIME_WAIT 是主动关闭方等待 2MSL，保证最后 ACK 可重传并让旧报文消失。
