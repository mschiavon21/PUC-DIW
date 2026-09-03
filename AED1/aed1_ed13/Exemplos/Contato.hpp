#ifndef _CONTATO_HPP_
#define _CONTATO_HPP_

#include "ERRO.hpp"
#include <string>

class contato : public Erro
{
private:
    std::string nome;
    std::string fone;

public:
    contato()
    {
        setErro(0);
        nome = "";
        fone = "";
    }

    contato(std::string nome_inicial,
            std::string fone_inicial)
    {
        setErro(0);
        setNome(nome_inicial);
        setFone(fone_inicial);
    }

    contato(const contato& another)
    {
        setErro(0);
        nome = another.nome;
        fone = another.fone;
    }

    ~contato()
    {
    }

    void setNome(std::string nome)
    {
        if (nome.empty())
        {
            setErro(1);
        }
        else
        {
            this->nome = nome;
        }
    }

    void setFone(std::string fone)
    {
        if (fone.empty())
        {
            setErro(2);
        }
        else
        {
            this->fone = fone;
        }
    }

    std::string getNome()
    {
        return nome;
    }

    std::string getFone()
    {
        return fone;
    }

    std::string toString()
    {
        return "{" + nome + "," + fone + "}";
    }

    bool hasErro()
    {
        return getErro() != 0;
    }
};

using ref_contato = contato*;

#endif