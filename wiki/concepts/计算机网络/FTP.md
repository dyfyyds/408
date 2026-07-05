---
type: concept
title: "FTP"
complexity: basic
domain: "计算机网络"
aliases:
  - 文件传输协议
created: 2026-07-04
updated: 2026-07-04
tags:
  - concept
  - 408
  - 计算机网络
status: developing
related:
  - "[[应用层协议]]"
  - "[[TCP协议]]"
sources:
  - ".raw/408/教材PDF/27王道《计算机网络》高清带书签.pdf"
---

# FTP

## Definition

FTP 是文件传输协议，使用 TCP 提供可靠传输。

## How It Works

- 控制连接：端口 21，传输命令。
- 数据连接：用于传输文件数据。
- 主动模式和被动模式的数据连接建立方向不同。

## Exam Focus

- 控制连接与数据连接分离。
- FTP 使用两个 TCP 连接。

## Common Pitfalls

- 控制连接持续存在，数据连接可按需建立和释放。
- FTP 不是无连接协议。

## Connections

- [[应用层协议]]
- [[TCP协议]]
