# VivaObra — Pessoas e Produções

## Sobre o projeto

O **VivaObra** é uma home-page criada com o objetivo de apresentar pessoas que produzem conhecimento e cultura, mostrando também algumas das obras, publicações e projetos desenvolvidos por elas.

O projeto segue a proposta **“Pessoas e Produções”**, tendo como foco principal autores, pesquisadores e artistas. A ideia é criar uma página simples e agradável de navegar, onde o usuário possa conhecer diferentes pessoas e descobrir um pouco mais sobre o trabalho de cada uma.

A identidade visual foi pensada para transmitir uma sensação acolhedora e editorial, utilizando principalmente tons de **verde, creme e laranja**. A intenção é reforçar a ideia de um catálogo vivo, que valoriza tanto as pessoas quanto aquilo que elas produzem.

---

## Dados do projeto

| Campo                   | Informação                    |
| ----------------------- | ----------------------------- |
| **Nome**                | Miguel                        |
| **Proposta**            | 1. Pessoas e Produções        |
| **Entidade principal**  | Pessoa                        |
| **Entidade secundária** | Publicações, obras e projetos |

---

## Estrutura da página

A home-page foi dividida em algumas seções para facilitar a navegação e organizar o conteúdo.

### Início

A primeira seção apresenta o VivaObra e explica de forma rápida a proposta do projeto. Também possui um botão que leva o usuário diretamente para a área de produções.

### Sobre o projeto

Nesta parte é apresentada a ideia por trás do VivaObra: mostrar que, por trás de cada produção, existe uma pessoa responsável por criar, pesquisar ou desenvolver aquele trabalho.

### Pessoas para conhecer

São apresentadas três pessoas em destaque:

* **Ana Martins** — escritora de São Paulo;
* **Lucas Ferreira** — pesquisador de Recife;
* **Joana Lima** — artista visual de Belo Horizonte.

Cada card apresenta uma imagem, a área de atuação da pessoa, seu nome e uma breve descrição sobre seu trabalho.

### Produções recentes

Essa seção apresenta algumas das produções relacionadas às pessoas cadastradas no projeto.

Entre elas estão:

* **Cartografias do Afeto** — projeto documental de Lucas Ferreira;
* **O lado de dentro da rua** — livro de Ana Martins;
* **Verde que inventa** — exposição de Joana Lima;
* **O mapa também sente** — artigo de Lucas Ferreira.

### Cadastro

No final da página existe um formulário para que o visitante possa informar seu nome e e-mail e demonstrar interesse em acompanhar novas histórias e produções.

---

## Relação entre as entidades

A proposta trabalha principalmente com duas entidades: **Pessoa** e **Produção**.

| Entidade     | Exemplos no projeto                                       |
| ------------ | --------------------------------------------------------- |
| **Pessoa**   | Ana Martins, Lucas Ferreira e Joana Lima                  |
| **Produção** | Livro, exposição, artigo e projeto documental             |
| **Relação**  | Cada produção está associada à pessoa responsável por ela |

Dessa forma, o conteúdo da página não apresenta apenas as obras de maneira isolada, mas também mostra quem está por trás de cada produção.

---

## Wireframe

Antes da implementação da página, foi elaborado um wireframe para organizar a estrutura e definir a disposição dos principais elementos da home-page.

O arquivo do wireframe está disponível em:

`public/assets/wireframe.svg`

![Wireframe do VivaObra](public/assets/wireframe.svg)

---

## Implementação

A página principal está localizada em:

`public/index.html`

Os estilos utilizados estão em:

`public/styles.css`

O projeto foi desenvolvido utilizando **HTML5 e CSS3**, com uma estrutura baseada em elementos semânticos.

Entre as principais tags utilizadas estão:

* `header`
* `nav`
* `main`
* `section`
* `article`
* `footer`
* `form`
* `label`
* `input`
* `button`

A utilização dessas tags ajuda a deixar o código mais organizado e facilita a compreensão da estrutura da página.

---

## Imagens

As imagens utilizadas no projeto são carregadas através do serviço **Lorem Picsum**.

Isso permite utilizar imagens reais na página sem precisar armazenar diversos arquivos de imagem dentro do repositório, mantendo o projeto mais leve.

As imagens continuam sendo referenciadas diretamente pelo serviço:

**Lorem Picsum:** https://picsum.photos/

---

## Tecnologias e ferramentas

Para desenvolver o projeto foram utilizadas as seguintes ferramentas:

* **HTML5** — estrutura da página;
* **CSS3** — estilização e layout;
* **Visual Studio Code** — desenvolvimento e edição dos arquivos;
* **Git** — controle de versão;
* **GitHub** — armazenamento e gerenciamento do repositório;
* **GitHub Classroom** — entrega e acompanhamento da atividade.

---

## Organização dos arquivos

A estrutura principal do projeto está organizada da seguinte forma:

```text
t3/
└── public/
    ├── index.html
    ├── styles.css
    └── assets/
        └── wireframe.svg
```

---

## Histórico do desenvolvimento

Durante o desenvolvimento, a implementação foi sendo organizada em commits para registrar as etapas do projeto.

A ideia é manter o histórico do desenvolvimento separado da versão principal, utilizando a branch de desenvolvimento e, posteriormente, realizando o merge para a branch principal conforme as orientações da atividade.

Nesta cópia local, a implementação foi organizada na branch **`DEV`**, que é a branch disponibilizada no repositório.

---

## Como executar o projeto

Para visualizar o projeto localmente, existem duas opções.

### Opção 1 — Abrir diretamente no navegador

Entre na pasta:

```text
t3/public
```

e abra o arquivo:

```text
index.html
```

O navegador irá carregar a página normalmente.

### Opção 2 — Utilizar um servidor local

Uma opção recomendada é utilizar o **Visual Studio Code** com uma extensão de servidor local, como o Live Server.

Depois de abrir o projeto no Visual Studio Code:

1. Abra a pasta `t3`;
2. Acesse a pasta `public`;
3. Abra o arquivo `index.html`;
4. Inicie o servidor local;
5. A página será aberta no navegador.

Essa opção facilita o desenvolvimento porque permite visualizar as alterações feitas no HTML e CSS de forma mais prática.

---

## Objetivo do projeto

Mais do que apenas criar uma página visualmente organizada, o objetivo do VivaObra é colocar em prática os conhecimentos de **HTML, CSS, organização de páginas, semântica e controle de versão** trabalhados durante a atividade.

A proposta busca criar uma experiência simples, mas que tenha uma identidade própria e consiga transmitir a ideia de que **toda obra possui uma história e uma pessoa por trás dela**.

---

## Autor

**Miguel**

Projeto acadêmico — **Pessoas e Produções**

