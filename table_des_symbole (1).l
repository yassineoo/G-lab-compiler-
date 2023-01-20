//Définition d'une entrée dans la tables des symboles

typedef struct {
char* identif;
	int classe; // -  or glob or arg or loc
	int type;  // int ... || fun || struct || table ||
	char * value; 
	int complement; /* taille des tableaux, nb de param des fct */
	desc_identif* next;
	}desc_identif;
   
   //définition de la table des symboles : listes chainées des entrées

   typedef struct{
	desc_identif* root; //1er entrée
	desc_identif* tail; //derniere entrée
	int current_size; //taille de la table
   }table_des_symboles

   //variable globale de la table des symboles

   table_des_symboles* tbs;

   //entetes des fonction pour la manipulation de la table des symboles
   
  	void init(); //initialise la table 
	desc_identif* recherche(char *identif); //retourn l'adresse de lentrée dans la table
	int ajouter(char *identif, int classe, int type,char * value, int complement); //ajoute une entrée en fin de table
	int modifier(char *identif, int classe, int type,char * value, int complement); //modifie un entrée 
	void affiche_dico(void); //affiche toute les entrées
	
	
    //inmplémentation des fonctions



void init(){
	tbs=(tables_des_symboles*)malloc(sizeof(table_des_symboles));
	tbs->current_size=0;
	tbs->root=NULL;
	tbs->tail=NULL;
}

desc_identif* recherche(char* identif){
	desc_identif* p = tbs->root; 
	while (p!= NULL)&&(strcmp(p->identif,identif)!=0){
	p=p->next;
	}
}
void ajouter(char *identif, int classe, int type,char * value, int complement){
	desc_identif* t= (desc_identif*)malloc(sizeof(desc_identif));
	strcpy(t->identif=identif,identif);
	t->classe=classe;
	t->type=type;
	t->value=value;
	t->complement=complement;
	t->next=NULL
	desc_identif* p = tbs->tail;
	p->tail=t;
	tbs->current_size++;
}



int modifier(char *identif, int classe, int type,char * value, int complement){
	desc_identif* p = recherche(identif);
	if(p!=NULL){
		p->classe=classe;
		p->type=type;
		p->value=value;
		p->complement=complement;
	}
}


void affiche_dico() {
	desc_identif* p;

		for(p->tbs->root,p!=NULL,p=p->next){
		

            printf("%s |%d | %s |%d" , p->identif ,p->classe , p->type , p->value ,p->complement ) ;      
	}
	
}
