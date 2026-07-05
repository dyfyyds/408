---
type: concept
title: "HTTPS"
complexity: intermediate
domain: "计算机网络"
aliases:
  - HTTP over TLS
created: 2026-07-04
updated: 2026-07-04
tags:
  - concept
  - 408
  - 计算机网络
status: developing
related:
  - "[[HTTP]]"
  - "[[TCP协议]]"
sources:
  - ".raw/408/教材PDF/27王道《计算机网络》高清带书签.pdf"
---

# HTTPS

## Definition

HTTPS 是在 HTTP 与 TCP 之间加入 TLS/SSL 安全层的协议组合。

## How It Works

- 非对称加密用于身份认证和密钥协商。
- 对称加密用于后续数据传输。
- 证书由 CA 签发，用于验证服务器身份。

## Exam Focus

- HTTPS 端口 443。
- 对称/非对称加密分工。
- 证书与数字签名作用。

## Common Pitfalls

- HTTPS 不是新的应用语义，核心仍是 HTTP。
- 非对称加密通常不直接加密全部业务数据。

## Connections

- [[HTTP]]
- [[应用层协议]]
