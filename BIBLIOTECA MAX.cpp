#include <iostream>
using namespace std;

struct libro {
    string titulo;
    string autor;
};

void mostrarlibros(libro libros[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << (i + 1) <<". "<< libros[i].titulo <<" - "<< libros[i].autor<< endl;
    }
    cout << endl;
}

int main() {
    libro historia[10] = {
        {"la historia de la humanidad", "juan perez"},
        {"el origen de las especies", "charles darwin"},
        {"la segunda guerra mundial", "winston churchill"},
        {"historia de roma", "tito livio"},
        {"la caida del imperio romano", "edward gibbon"},
        {"el fin de la edad media", "jose maria alvarez"},
        {"el descubrimiento de america", "cristobal colon"},
        {"historia de la revolucion francesa", "alexis de tocqueville"},
        {"los origenes de la civilizacion", "marvin harris"},
        {"historia del renacimiento", "jacob burckhardt"}
    };

    libro ficcion[10] = {
        {"cien anos de soledad", "gabriel garcia marquez"},
        {"don quijote de la mancha", "miguel de cervantes"},
        {"1984", "george orwell"},
        {"crimen y castigo", "fiodor dostoyevski"},
        {"orgullo y prejuicio", "jane austen"},
        {"matar a un ruisenor", "harper lee"},
        {"el gran gatsby", "scott fitzgerald"},
        {"ulises", "james joyce"},
        {"moby dick", "herman melville"},
        {"la sombra del viento", "carlos ruiz zafon"}
    };

    libro noficcion[10] = {
        {"sapiens: de animales a dioses", "yuval noah harari"},
        {"el mundo y sus demonios", "carl sagan"},
        {"la historia de la filosofia", "will durant"},
        {"el poder del ahora", "eckhart tolle"},
        {"el arte de la guerra", "sun tzu"},
        {"en defensa de la vida", "albert schweitzer"},
        {"la mente humana", "steven pinker"},
        {"breve historia de casi todo", "bill bryson"},
        {"el gene", "siddhartha mukherjee"},
        {"el hombre en busca de sentido", "viktor frankl"}
    };

    libro poesia[10] = {
        {"cien sonetos de amor", "pablo neruda"},
        {"leaves of grass", "walt whitman"},
        {"el canto de la tierra", "emily dickinson"},
        {"la divina comedia", "dante alighieri"},
        {"antologia poetica", "federico garcia lorca"},
        {"rimas", "becquer"},
        {"poemas completos", "gabriela mistral"},
        {"cantos de vida y esperanza", "ruben dario"},
        {"la flor", "octavio paz"},
        {"odas elementales", "pablo neruda"}
    };

    libro teatro[10] = {
        {"hamlet", "william shakespeare"},
        {"macbeth", "silliam shakespeare"},
        {"la casa de bernarda alba", "federico garcia lorca"},
        {"don juan tenorio", "tirso de molina"},
        {"el medico de su honra", "tirso de molina"},
        {"el burlador de sevilla", "tirso de molina"},
        {"esperando a godot", "samuel beckett"},
        {"un tranvia llamado deseo", "tennessee williams"},
        {"antigona", "sofocles"},
        {"al rey leal", "william shakespeare"}
    };

    libro cienciaficcion[10] = {
        {"1984", "george orwell"},
        {"fahrenheit 451", "ray bradbury"},
        {"un mundo feliz", "aldous huxley"},
        {"neuromante", "william gibson"},
        {"dune", "frank herbert"},
        {"cronicas marcianas", "ray bradbury"},
        {"la guerra de los mundos", "wells"},
        {"fundacion", "isaac asimov"},
        {"el fin de la eternidad", "isaac asimov"},
        {"el hombre del castillo alto", "philip dick"}
    };

    libro misteriosuspenso[10] = {
        {"sherlock holmes: estudio en escarlata", "arthur conan doyle"},
        {"dracula", "bram stoker"},
        {"los crimenes de la calle morgue", "edgar allan poe"},
        {"el secreto de la esfinge", "agatha christie"},
        {"el codigo da vinci", "dan brown"},
        {"asesinato en el orient express", "agatha christie"},
        {"la chica del tren", "paula hawkins"},
        {"el silencio de los corderos", "thomas harris"},
        {"la verdad sobre el caso harry quebert", "joel dicker"},
        {"el psicoanalista", "john katzenbach"}
    };

    libro autoayuda[10] = {
        {"el poder del ahora", "eckhart tolle"},
        {"los 7 habitos de la gente altamente efectiva", "stephen covey"},
        {"piense y hagase rico", "napoleon hill"},
        {"la magia del orden", "marie kondo"},
        {"despierta tu heroe interior", "victor hugo manzanilla"},
        {"quien se ha llevado mi queso", "spencer johnson"},
        {"el monje que vendio su ferrari", "robin sharma"},
        {"la mente es que decides", "john kehoe"},
        {"el secreto", "rhonda byrne"},
        {"tu zonas erroneas", "wayne dyer"}
    };

    libro literaturainfantil[10] = {
        {"el principito", "antoine de saint-exupery"},
        {"alicia en el pais de las maravillas", "lewis carroll"},
        {"harry potter y la piedra filosofal", "rowling"},
        {"cuentos de la abuela amelia", "anonimo"},
        {"matilda", "roald dahl"},
        {"el gran gigante bonachon", "roald dahl"},
        {"charlie y la fabrica de chocolate", "roald dahl"},
        {"peter Pan", " barrie"},
        {"la telarana de charlotte", "white"},
        {"la isla del tesoro", "robert louis stevenson"}
    };

    libro filosofiaespiritualidad[10] = {
        {"el arte de la guerra", "sun tzu"},
        {"meditaciones", "marco aurelio"},
        {"asi hablo zaratustra", "friedrich nietzsche"},
        {"el tao te ching", "lao tse"},
        {"la doctrina secreta", "helena blavatsky"},
        {"los cuadernos de don juan", "carlos castaneda"},
        {"la bhagavad gita", "anonimo"},
        {"el bhagavad gita", "eckhart tolle"},
        {"la conciencia del ser", "osho"},
        {"el poder de la mente subconsciente", "joseph murphy"}
    };

    int opcion, libroelegido;
    

    do {
    	cout <<"bienvenido a la biblioteca max por favor"<<endl;
        cout << "seleccione que clase de libro quieres leer"<< endl;
        cout << "1. historia"<< endl;
        cout << "2. ficcion"<< endl;
        cout << "3. no ficcion"<< endl;
        cout << "4. poesia"<< endl;
        cout << "5. teatro"<< endl;
        cout << "6. ciencia ficcion"<< endl;
        cout << "7. misterio y suspenso"<< endl;
        cout << "8. autoayuda y desarrollo personal"<< endl;
        cout << "9. literatura infantil"<< endl;
        cout << "10.filosofia y espiritualidad"<< endl;
        cout << "0. salir"<< endl;
        cout << "elige una opcion (1-10) ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 10) {
           
            cout << " libros en la categoria "<< endl;
            switch(opcion) {
                case 1:
                    mostrarlibros(historia, 10);
                    break;
                case 2:
                    mostrarlibros(ficcion, 10);
                    break;
                case 3:
                    mostrarlibros(noficcion, 10);
                    break;
                case 4:
                    mostrarlibros(poesia, 10);
                    break;
                case 5:
                    mostrarlibros(teatro, 10);
                    break;
                case 6:
                    mostrarlibros(cienciaficcion, 10);
                    break;
                case 7:
                    mostrarlibros(misteriosuspenso, 10);
                    break;
                case 8:
                    mostrarlibros(autoayuda, 10);
                    break;
                case 9:
                    mostrarlibros(literaturainfantil, 10);
                    break;
                case 10:
                    mostrarlibros(filosofiaespiritualidad, 10);
                    break;
            }

            cout << "selecciona el numero del libro que quieres leer (1-10): "<<endl;
            cin >> libroelegido;

            if (libroelegido >= 1 && libroelegido <= 10) {
                cout << "has elegido el libro: " << endl;
                switch(opcion) {
                    case 1:
                        cout << historia[libroelegido - 1].titulo << " - " << historia[libroelegido - 1].autor << endl;
                        break;
                    case 2:
                        cout << ficcion[libroelegido - 1].titulo << " - " << ficcion[libroelegido - 1].autor << endl;
                        break;
                    case 3:
                        cout << noficcion[libroelegido - 1].titulo << " - " << noficcion[libroelegido - 1].autor << endl;
                        break;
                    case 4:
                        cout << poesia[libroelegido - 1].titulo << " - " << poesia[libroelegido - 1].autor << endl;
                        break;
                    case 5:
                        cout << teatro[libroelegido - 1].titulo << " - " << teatro[libroelegido - 1].autor << endl;
                        break;
                    case 6:
                        cout << cienciaficcion[libroelegido - 1].titulo << " - " << cienciaficcion[libroelegido - 1].autor << endl;
                        break;
                    case 7:
                        cout << misteriosuspenso[libroelegido - 1].titulo << " - " << misteriosuspenso[libroelegido - 1].autor << endl;
                        break;
                    case 8:
                        cout << autoayuda[libroelegido - 1].titulo << " - " << autoayuda[libroelegido - 1].autor << endl;
                        break;
                    case 9:
                        cout << literaturainfantil[libroelegido - 1].titulo << " - " << literaturainfantil[libroelegido - 1].autor << endl;
                        break;
                    case 10:
                        cout << filosofiaespiritualidad[libroelegido - 1].titulo << " - " << filosofiaespiritualidad[libroelegido - 1].autor << endl;
                        break;
                }
            } else {
                cout << "numero de libro invalido."<< endl;
            }
        } else if (opcion != 0) {
            cout << "opcion invalida, por favor elija una opcion correcta." << endl;
            cout << "por favor ingrese uno valido"<<endl;
        }
        
    } while (opcion != 0); 

    cout << "gracias por leer el libro"<< endl;
    return 0;


}
