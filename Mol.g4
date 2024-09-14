grammar Mol;

molecula    : ramificacao* cadeia_principal insaturacao grupo_funcional EOF;

cadeia_principal      : PREFIXO;
ramificacao           : ('-' pos '-' numero?)? cadeia_principal 'il' '-'?;
insaturacao           : ('-' pos '-' numero?)? (LIGACAO);
grupo_funcional       : GRUPO_FUNCIONAL;

numero      : 'di' | 'tri' | 'tetra';
pos         : (INT ',')* INT;

PREFIXO : 
   'met'
 | 'et'
 | 'prop'
 | 'but'
 | 'pent'
 | 'hex'
 | 'hept'
 | 'oct'
 | 'non'
 | 'dec';

LIGACAO :
   'an'
 | 'en'
 | 'in';

GRUPO_FUNCIONAL : 'o';

INT        : [0-9]+ ;
WHITESPACE : ' ' -> skip;
