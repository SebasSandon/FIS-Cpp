grammar Rule;

/* Parser Rules*/
knowledge_base: (rules)*;

rules: antecedent consequent SEMI;

antecedent: IF premise (AND premise|OR premise)*;

consequent: THEN premise;

premise: var=variable IS val=variable;

variable: ID;

/* Lexer Rules*/
OR: 'o';
AND: 'y';
IF: 'si';
IS: 'es';
THEN: 'entonces';
SEMI: ';';
ID: LETRA+;

fragment
LETRA: [a-zA-Z];

WS : [ \t\r\n]+ -> skip ;
COMMENT: '/*' .*? '*/' -> skip;
