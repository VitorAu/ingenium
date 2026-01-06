# Ingenium

**Ingenium** é uma engine 2D leve, construída em **C++** usando **CMake** e **raylib**. O projeto é voltado para **propósitos de aprendizado**.

---

## Funcionalidades

* **Entity-Component-System**: Gerencie entidades de forma eficiente, com organização por tags e gerenciamento de estado ativo/inativo.
* **Integração com Raylib**: Renderização 2D simples e manipulação de entradas.
* **Sistema de build CMake**: Compatível com múltiplas plataformas, com estrutura de projeto fácil de compilar.

---

## Estrutura do Projeto

```
ingenium/
├── include/
│   ├── Components.h
│   ├── Engine.h
│   ├── Entity.h
│   ├── EntityManager.h
│   ├── Scene.h
│   ├── Systems.h
├── src/
│   ├── CMakeLists.txt
│   ├── main.cpp
│   ├── Engine.cpp
│   ├── Entity.cpp
│   ├── EntityManager.cpp
│   ├── Scene.cpp
│   ├── Systems.cpp
├── vendor/
│   ├── raylib/
│   ├── CMakeLists.txt
├── CMakeLists.txt
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

3. Execute o engine:

```bash
./src/ingenium
```

---

## Uso

O objetivo do projeto é **aprender sobre engines 2D, ECS e C++ moderno**.

---
