# Ingenium

**Ingenium** é uma engine 2D leve e educacional, construída em **C++** usando **CMake** e **raylib**. O projeto é voltado para **propósitos de aprendizado**, permitindo aos desenvolvedores experimentar conceitos centrais de desenvolvimento de engines, incluindo um **sistema de gerenciamento de entidades com ECSM (Entity-Component-System Manager)**.

---

## Funcionalidades

* **Entity-Component-System**: Gerencie entidades de forma eficiente, com organização por tags e gerenciamento de estado ativo/inativo.
* **Integração com Raylib**: Renderização 2D simples e manipulação de entradas.
* **Sistema de build CMake**: Compatível com múltiplas plataformas, com estrutura de projeto fácil de compilar.

---

## Estrutura do Projeto

```
ingenium/
├── CMakeLists.txt
├── src/
│   ├── CMakeLists.txt
│   ├── main.cpp
│   ├── Engine.cpp
│   ├── Engine.h
├── include/
├── vendor/
├── init.sh  
└── README.md
```

---

## Dependências

* **Compilador C++**: Compatível com C++17/23 (GCC, Clang, MSVC).
* **CMake**: Para gerar arquivos de build.
* **Raylib**: Biblioteca para desenvolvimento de jogos 2D.

---

## Como Compilar

1. Clone o projeto:

```bash
git clone <url-do-repositorio>
cd ingenium
```

2. Crie a pasta de build e compile:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

3. Execute o jogo/engine:

```bash
./src/ingenium
```

---

## Uso

O objetivo do projeto é **aprender sobre engines 2D, ECS e C++ moderno**.

---
