# 408 考研知识库

Mode: E（Research）+ D（Personal）组合
Purpose: 408 考研（数据结构 + 计算机组成原理 + 操作系统 + 计算机网络）系统性复习知识库
Owner: —
Created: 2026-07-02

---

## 目录结构

```
vault/
├── .raw/                       # 教材PDF、网课笔记、真题截图
├── wiki/
│   ├── index.md                # 总索引
│   ├── overview.md             # 复习总览
│   ├── hot.md                  # 最近上下文
│   ├── log.md                  # 操作日志
│   ├── 每日复盘.md              # 当日学习记录
│   │
│   ├── 数学/                   # 数学（一/二/三）
│   ├── 英语/                   # 英语（一/二）
│   ├── 政治/                   # 政治五科
│   ├── 408专业课/              # 408 专业课
│   │   ├── 数据结构/
│   │   ├── 计算机组成原理/
│   │   ├── 操作系统/
│   │   └── 计算机网络/
│   │
│   ├── concepts/               # 概念库（一个概念一页）
│   ├── papers/                 # 真题/模拟卷
│   ├── gaps/                   # 知识盲区
│   ├── goals/                  # 复习目标
│   └── resources/              # 参考资料
│
├── _templates/                 # 笔记模板
└── CLAUDE.md                   # 本文件
```

---

## 约定

- 所有笔记使用 YAML frontmatter
- 使用 `[[wikilink]]` 关联页面
- **更新/修改文件时，必须同步将文件头部 Frontmatter 中的 `updated` 字段更新为当前操作的日期**。
- `.raw/` 放置原始资料，不修改
- `wiki/log.md` 是追加日志，新条目在顶部
- `wiki/hot.md` 在每次 ingest 后更新

---

## 操作

- **Ingest**：将资料放入 `.raw/`，说 "ingest [文件名]"
- **Query**：直接问问题
- **Lint**：说 "lint the wiki" 运行健康检查
