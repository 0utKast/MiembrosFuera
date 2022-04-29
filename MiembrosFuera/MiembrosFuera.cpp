#if 0
class Fecha
{
private:
    int m_dia;
    int m_mes;
    int m_anho;

public:
    Fecha(int dia, int mes, int anho)
    {
        setFecha(dia, mes, anho);
    }

    void setFecha(int dia, int mes, int anho)
    {
        m_dia = dia;
        m_mes = mes;
        m_anho = anho;
    }

    int getDia() { return m_dia; }
    int getMes() { return m_mes; }
    int getAnho() { return m_anho; }
};

#endif




class Fecha
{
private:
    int m_dia;
    int m_mes;
    int m_anho;

public:
    Fecha(int dia, int mes, int anho);

    void SetFecha(int dia, int mes, int anho);

    int getDia() { return m_dia; }
    int getMes() { return m_mes; }
    int getAnho() { return m_anho; }
};

// constructor Fecha
Fecha::Fecha(int dia, int mes, int anho)
{
    SetFecha(dia, mes, anho);
}

// Función miembro Fecha
void Fecha::SetFecha(int dia, int mes, int anho)
{
    m_mes = mes;
    m_dia = dia;
    m_anho = anho;
}




#if 0

class Calc
{
private:
    int m_valor = 0;

public:
    Calc(int valor = 0) : m_valor(valor) {}

    Calc& sumar(int valor) 
    { 
        m_valor += valor;  return *this; 
    }
    Calc& restar(int valor) 
    { 
        m_valor -= valor;  return *this; 
    }
    Calc& mult(int valor) 
    { 
        m_valor *= valor;  return *this; 
    }

    int getValor() 
    { 
        return m_valor; 
    }
};


class Calc
{
private:
    int m_valor = 0;

public:
    Calc(int valor = 0);

    Calc& sumar(int valor);
    Calc& restar(int valor);
    Calc& mult(int valor);

    int getvalor() { return m_valor; }
};

Calc::Calc(int valor) : m_valor(valor)
{
}

Calc& Calc::sumar(int valor)
{
    m_valor += valor;
    return *this;
}

Calc& Calc::restar(int valor)
{
    m_valor -= valor;
    return *this;
}

Calc& Calc::mult(int valor)
{
    m_valor *= valor;
    return *this;
}

#endif









