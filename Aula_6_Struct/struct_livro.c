struct Livros {
char titulo[50];
char autor[50];
char assunto[100];
int id_livro;
};

int main(){
    struct Livros Livro1 = { "Título genérico", "Blog Trybe",
    "Um livro bem genérico", 6495407 };
    printf("Título do livro 1: %s ", Livro1.titulo);

}