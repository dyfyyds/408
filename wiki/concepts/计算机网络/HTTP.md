---
type: concept
title: "HTTP"
complexity: intermediate
domain: "计算机网络"
aliases:
  - 超文本传输协议
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
  - "[[HTTPS]]"
sources:
  - ".raw/408/教材PDF/27王道《计算机网络》高清带书签.pdf"
---

# HTTP

## Definition

HTTP 是 Web 应用使用的应用层协议，基于请求-响应模型。

## How It Works

- 客户端发送请求报文，服务器返回响应报文。
- HTTP/1.0 默认非持久连接，HTTP/1.1 默认持久连接。
- 常见方法：GET、POST、HEAD。

## Exam Focus

- 持久连接与非持久连接的 RTT 计算。
- 状态码类别：2xx 成功、3xx 重定向、4xx 客户端错误、5xx 服务器错误。
- Cookie 用于状态保持。

## Common Pitfalls

- HTTP 本身无状态。
- HTTP 默认端口 80，HTTPS 默认端口 443。

## Connections

- [[HTTPS]]
- [[应用层协议]]
