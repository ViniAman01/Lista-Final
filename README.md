# Instruções para aplicação do código

**1.** dynfile.h/dynfile.c é a biblioteca criada para facilitar a abertura de arquivos e na alocação dinâmica, também inclui checagem de erros. Essa 
biblioteca está presente na maioria dos exercícios.
Para criar o arquivo objeto dessa biblioteca, deve-se executar o seguinte comando pelo menos uma vez:
 
   ```gcc -c dynfile.c```

**2.** Do ex3.c até o ex24.c (Exceto o ex7.c) a compilação deve ser feita da seguinte forma:
  
 ```gcc -c exN.c```
  
  ```gcc dynfile.o exN.o -o exN```
    
  > Onde "N" é o número do exercicio. 

**3.** Do ex8.c até o ex22.c (Exceto o ex21.c, ex19.c), deve-se atribuir como argumento na execução o nome de um arquivo texto, exemplo:
  
  ```./ex8 txt.txt```

  > Esse é o caso da execução em linux que se usa "./". E o arquivo deve possuir a extensão ".txt".
  
   
  - 3.1 No ex15.c deve-se passar 2 arquivos texto, exemplo:

      ```./ex15 txt.txt txt2.txt```

    > Caso não seja passado os arquivos texto, o seguinte erro será impresso no terminal:
    "Erro na abertura: Bad address"

  - 3.2 No ex11.c deve-se passar além do nome do arquivo texto, deve-se passar também um caractere que terá suas aparições contabilizadas, exemplo:
  
    ```./ex11 txt.txt c```
    > Caso não seja atribuido um caractere, um erro de segmentação será impresso no terminal.
