# Git 历史重写指南

## 目标
将现有提交信息翻译为中文

## 当前提交历史
```
8c39bd5 docs(git): 添加 Git 提交指南文档
73d23f3 feat: add claude-obsidian plugin with wiki system
```

## 方法一：使用交互式 rebase（推荐）

### 步骤 1：启动交互式 rebase
```bash
cd D:\408\408
git rebase -i HEAD~2
```

### 步骤 2：编辑器会打开类似这样的内容
```
pick 73d23f3 feat: add claude-obsidian plugin with wiki system
pick 8c39bd5 docs(git): 添加 Git 提交指南文档
```

### 步骤 3：修改为以下内容
```
reword 73d23f3 feat(claude-obsidian): 安装 claude-obsidian 插件系统
reword 8c39bd5 docs(git): 添加 Git 提交指南文档
```

**说明：**
- 将第一个 `pick` 改为 `reword`（需要修改提交信息）
- 第二个已经是中文，可以保持 `pick` 或也改为 `reword` 来完善

### 步骤 4：保存并关闭编辑器

### 步骤 5：填写新的提交信息

对于第一个提交，Git 会打开编辑器，替换为：

```
feat(claude-obsidian): 安装 claude-obsidian 插件系统

- 安装 15 个 claude-obsidian 技能，用于 AI 知识管理
- 添加 4 个命令（autoresearch, canvas, save, wiki）
- 添加 3 个代理（verifier, wiki-ingest, wiki-lint）
- 设置 wiki 目录结构（concepts, entities, sources, meta）
- 安装模板和核心 wiki 文件（index.md, hot.md, log.md）
- 复制 WIKI.md 架构文档
- 从 kepano/obsidian-skills 安装 claude-markdown 技能
- 添加 .gitignore 用于 Obsidian vault 最佳实践
- 配置 gitignore 忽略大文件、系统文件和 Obsidian 冲突

共同作者: Claude Fable 5 <noreply@anthropic.com>
```

对于第二个提交（如果也标记了 reword），填写：

```
docs(git): 添加 Git 提交指南文档

- 创建 Git 提交中文模板
- 配置 Git 别名和编辑器
- 编写 Git 使用文档
```

### 步骤 6：完成 rebase
```bash
# 如果有冲突，解决冲突后：
git rebase --continue
```

### 步骤 7：强制推送到 GitHub
```bash
git push --force origin main
```

## 方法二：使用 git filter-branch（适合批量修改）

如果您想自动化处理，可以使用：

```bash
cd D:\408\408

git filter-branch --msg-filter '
sed "s/feat: add claude-obsidian plugin with wiki system/feat(claude-obsidian): 安装 claude-obsidian 插件系统/g
s/Install 15 claude-obsidian skills for AI-powered knowledge management/- 安装 15 个 claude-obsidian 技能，用于 AI 知识管理/g
s/Add 4 commands (autoresearch, canvas, save, wiki)/- 添加 4 个命令（autoresearch, canvas, save, wiki）/g
s/Add 3 agents (verifier, wiki-ingest, wiki-lint)/- 添加 3 个代理（verifier, wiki-ingest, wiki-lint）/g
s/Set up wiki directory structure with concepts, entities, sources, meta/- 设置 wiki 目录结构（concepts, entities, sources, meta）/g
s/Install templates and core wiki files (index.md, hot.md, log.md)/- 安装模板和核心 wiki 文件（index.md, hot.md, log.md）/g
s/Copy WIKI.md schema documentation/- 复制 WIKI.md 架构文档/g
s/Install claude-markdown skills from kepano\/obsidian-skills/- 从 kepano\/obsidian-skills 安装 claude-markdown 技能/g
s/Add .gitignore for Obsidian vault best practices/- 添加 .gitignore 用于 Obsidian vault 最佳实践/g
s/Configure gitignore for large files, OS artifacts, and Obsidian conflicts/- 配置 gitignore 忽略大文件、系统文件和 Obsidian 冲突/g
s/Co-Authored-By: Claude Fable 5 <noreply@anthropic.com>/共同作者: Claude Fable 5 <noreply@anthropic.com>/g"' HEAD~2..HEAD
```

然后强制推送：
```bash
git push --force origin main
```

## 验证结果

```bash
# 查看提交历史
git log --oneline

# 查看详细提交信息
git log --format="%h - %s"

# 查看完整提交信息
git log -1 --format="%B"
```

## 注意事项

⚠️ **重要警告：**
- 重写历史会改变提交的 SHA 哈希值
- 如果其他人已经从远程仓库拉取了这些提交，他们会遇到冲突
- 这是个人仓库，所以不会有问题
- **执行后必须使用 `git push --force` 推送更改**

## 推荐方法

**方法一（交互式 rebase）** 更适合，因为：
- 可以逐个审查和编辑提交
- 更直观，不容易出错
- 可以中途取消操作
