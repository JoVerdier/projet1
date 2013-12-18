#include <cstdio> // pour utilisation du NULL

class C_cellule
{
	private:
		C_cellule * pCELpere;
		C_cellule * pCELfils;
	
	public:
		void CELchainer(C_cellule * pCELpere);
		void CELextraire();
		C_cellule * CELchercher_prec(unsigned int uiCELposition);
		C_cellule * CELchercher_suiv(unsigned int uiCELposition);
		C_cellule(){pCELfils = NULL; pCELpere = NULL;}
		C_cellule(C_cellule&){pCELfils = NULL; pCELpere = NULL;}
		~C_cellule();
		C_cellule &operator=(C_cellule&);
};