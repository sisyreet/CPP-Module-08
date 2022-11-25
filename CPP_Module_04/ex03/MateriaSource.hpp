#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

	AMateria			*m_materias[4];
	int					m_materiasLearned;

public:

	MateriaSource();	
	MateriaSource(MateriaSource const& src);
	MateriaSource& operator=(MateriaSource const& src);
	virtual ~MateriaSource();

	virtual void		learnMateria(AMateria* m);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif