grammar IUPAC;

molecula: ramificacao* cadeia ligacao tipo;

cadeia: (C1 | C2 | C3 | C4 | C5 | C6 | C7 | C8 | C9 | C10);
ligacao: pos '-' numero? (SIMPLES | DUPLA | TRIPLA);
tipo: HIDROCARBONETO;
ramificacao:  pos '-' numero? cadeia 'il' '-'?;
numero: 'di' | 'tri' | 'tetra';
pos: (INT ',')* INT;

C1  : 'met';
C2  : 'et';
C3  : 'prop';
C4  : 'but';
C5  : 'pent';
C6  : 'hex';
C7  : 'hept';
C8  : 'oct';
C9  : 'non';
C10 : 'dec';

SIMPLES : 'an';
DUPLA: 'en';
TRIPLA: 'in';

HIDROCARBONETO: 'o';

INT     : [0-9]+ ;
