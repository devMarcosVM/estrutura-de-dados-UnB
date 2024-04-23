# STRUCT

```
struct [tag da estrutura] {
tipo_da_variavel nome_da_variavel;
tipo_da_variavel nome_da_variavel;
...
tipo_da_variavel nome_da_variavel;
} [uma ou mais variáveis da estrutura];
```

```
struct Livros {
char titulo[50];
char autor[50];
char assunto[100];
int id_livro;
};
// inicializando
struct Livros Livro1 = { "Título genérico", "Blog Trybe",
"Um livro bem genérico", 6495407 };
```
