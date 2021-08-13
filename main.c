#include <stdio.h>

int main () {

    int dia, mes;
    char sexo;

    printf("Cual es tu sexo? (M o F) \n");
    scanf("%c", &sexo);
    printf ("Ingresa el dia que naciste: 1-31\n");
    scanf ("%d", &dia);
    printf ("Ingresa el mes en que naciste: 1-12\n");
    scanf ("%d", &mes);
    

    if((dia >= 21 && mes == 3)||(dia <=20 && mes ==4 )) {
        printf("Tu signo es Aries. En lo profesional te espera una dura etapa de trabajo que te traerá recompensas en el futuro.  Tendrás cambios laborales que afectarán a tu sueldo, pero siempre positivos. Has hecho una inversión y tienes que esperar a que dé frutos, no es tan rápido. Tendrás la opción de hacer algo extra a tiempo parcial, si lo buscabas. Tienes todo a favor para realizar los cambios que creas oportunos en tu vida."); 
        if(sexo == 'M')
            printf("En el amor no seas brusco ni imprudente. La indicada llegara cuando menos te lo esperes y te esperara una vida llena de pasion ardiente con ella a lado tuyo. \n");
        else if(sexo == 'F')
            printf("La vida de casada puede llegar a tener momentos muy pesados tanto en el matrimonio como en el trabajo. Pero piensa en la alegria con en el hijo que vas a tener con el hombre que hiciste tus juramentos.");
        }

    if((dia >= 24 && mes == 9)||(dia <= 23 && mes == 10)) {
        printf("Tu signo es Libra. Intenta progresar en el terreno laboral, tendrás oportunidades interesantes. Define bien tus objetivos en el trabajo y conseguirás grandes progresos. No es un buen momento para pedir un préstamo, por lo que debes tratar de ahorrar un poco. Te estás exigiendo mucho profesionalmente, pero vas a tener buenos resultados. \n");
        if(sexo == 'M')
            printf("Volverás a ver a un antiguo amor, pero no te dejes llevar por la nostalgia del pasado. Surgirán romances inesperados, valóralos, puede haber alguno muy interesante.  \n");
        else if(sexo == 'F')
            printf("No permitas que tu vida se reduzca a lo laboral, atiende tus necesidades. Deberías mantener un horario regular en tus comidas y otros aspectos de la salud. ");
        }
    if((dia >= 21 && mes == 4)||(dia <= 21 && mes == 5)) {
        printf("Tu signo es Tauro. Piensa en tus proyectos de ahora, no en el largo plazo, puede haber cambios. Si adquirieses más conocimientos, progresarías más rápidamente en tu trabajo. Laboralmente van a darte más responsabilidades, lo demás llegará después. No te van a faltar las oportunidades ni las sorpresas en lo sentimental. \n");
        if(sexo == 'M')
            printf("En el amor serás muy popular, sobre todo si te decides a cambiar de ambiente este día. Sabrás disfrutar de las cosas buenas que tiene la vida y lo pasarás muy bien. \n");
        else if(sexo == 'F')
            printf("En el amor podrías tener alguna molestia de tipo nervioso, intenta relajarte un poco. Tienes un momento excelente para la salud física y mental, disfruta el día. ");
        }
    if((dia >= 24 && mes == 10)||(dia <= 22 && mes == 11)) {
        printf("Tu signo es Escorpio. Mantén firme tu posición profesional, tú llevas la razón esta ocasión. Negocia bien, con la cabeza fría y dispondrás de grandes oportunidades en el trabajo. Tendrás gastos inesperados relacionados con el transporte, intenta preverlos. Organízate bien en tu empleo y te irás librando de agobios paulatinamente. Se dan circunstancias que te colocan en el camino para lograr una reconciliación.\n");
        if(sexo == 'M')
            printf("Tómate con calma la relación con los amigos y no te enfades, no conduce a nada. Por otro lado nunca conoceras a tu media naranja. \n");
        else if(sexo == 'F')
            printf("Ten cuidado con lo que dices, no prometas nada que no estés en condiciones de cumplir. Pasas por un buen momento en el amor y te harán un regalo que te sorprenderá. ");
        }
    if((dia >= 22 && mes == 5)||(dia <= 21 && mes == 6)) {
        printf("Tu signo es Geminis. Deberías repartir más las responsabilidades, te agotas en el trabajo innecesariamente. Tiendes a despilfarrar en cosas innecesarias, intenta controlarte un poquito. Podrías invertir tus ahorros en algo que te haga ilusión, puedes permitírtelo. Te va a faltar tiempo para realizar todos tus proyectos, tómatelo con calma. Conseguirás romper con la rutina, tendrás grandes ideas que debes aprovechar. \n");
        if(sexo == 'M')
            printf("En el amor, si tienes pareja, tu relación atravesará un momento excelente, disfrútalo. Estás algo de los nervios y necesitas esforzarte un poco más, pero con voluntad puedes. \n");
        else if(sexo == 'F')
            printf("En las relaciones has estado con las defensas bajas y ahora empiezas a recuperar tu salud, te animarás. Tu sistema nervioso está al límite y necesitas relajarte, debes descansar, te es muy necesario.");
        }
    if((dia >= 23 && mes == 11)||(dia <= 21 && mes == 12)) {
        printf("Tu signo es Sagitario. Ve pensando en la posibilidad de una ocupación extra que te de dinero adicional. Tendrás la oportunidad de realizar una módica inversión en un negocio pequeño. Te están llegando ideas atrevidas respecto a tu trabajo, de que los apliques dependerán muchas cosas. En el amor, escucha a tu corazón y háblale con él a tu pareja, le quitarás dudas y temores.\n");
        if(sexo == 'M')
            printf("Deja que tus sentimientos fluyan libremente, te encontrarás sorpresas agradables. Trata de no seguir comparando a tu pareja con otras personas, le haces de menos.  \n");
        else if(sexo == 'F')
            printf("En el amor estás tratando de tener más positividad y esa actitud te beneficiará mucho. Puede que notes algo de cansancio, pero te irás recuperando poco a poco. ");
        }
    if((dia >= 21 && mes == 6)||(dia <= 23 && mes == 7)) {
        printf("Tu signo es Cancer. Tendrás buenas noticias relacionadas con lo económico, pero no bajes la guardia. Planifica tus tareas en el trabajo con antelación y no te despistes, evitarás problemas. Si tienes que hacer gastos importantes espera un poco, no es buen momento. Vas a tener más tiempo libre para dedicárselo a tus amigos y a tu familia.\n");
        if(sexo == 'M')
            printf("Piensa en el amor,si cambias de ambiente podrás conocer gente nueva que te resulte interesante. Trata de ser prudente con tu familia y ten paciencia, no compliques las cosas. \n");
        else if(sexo == 'F')
            printf("Tienes un poco abandonada a tu novio, sal un poco más y diviértete. Tómate tu descanso más en serio y pidele compania, es necesario para que te encuentres bien. Organízate, resuelve los asuntos uno a uno y te evitarás muchos agobios.  ");
        }
    if((dia >= 22 && mes == 12)||(dia <= 20 && mes==1)) {
        printf("Tu signo es Capricornio. Organiza muy bien tu presupuesto para evitar problemas inesperados más adelante. Necesitas que alguien de confianza te asesore en finanzas, no te lances sin asesoramiento. Estás con mucho agobio profesional, tendrás que relegar algunas responsabilidades en el trabajo, pero no te inquietes por lo que no puedas resolver. Un día propicio para considerar cambios laborales, no te sientes bien donde estás.\n");
        if(sexo == 'M')
            printf("En el amor, irás aclarando dudas y resolviendo problemas con tu pareja, os irá bien. Si no tienes pareja podrías conocer a alguien en un acontecimiento cultural. \n");
        else if(sexo == 'F')
            printf("Mantén a raya las grasas y los picantes en tu alimentación, asi estaras enn mejor forma y salud para impresionar a tu hombre. Tienes un periodo de tensiones, no te agobies y cuídate un poquito la salud, verás como todo vuelve a su cauce y seran mas felices. ");
        }
    if((dia >= 24 && mes==7)||(dia <= 23 && mes == 8)) {
        printf("Tu signo es Leo. Si haces un balance de los últimos meses, verás como las cosas no te van mal. Aprovecha bien el tiempo con tu trabajo y tendrás muy buenos resultados. Durante estos días cuentas con la protección de los astros para los temas laborales. Pasas por una serie de cambios positivos en lo profesional, sácales partido.\n");
        if(sexo == 'M')
            printf("En el amor, estás en un momento muy bueno para las relaciones sentimentales, aprovecha la racha. Tu familia y tus amigos estarán muy pendientes de ti, no te faltarán atenciones. \n");
        else if(sexo == 'F')
            printf("No hagas caso de los comentarios que escuches, sé firme y ve a tu aire. Cuida tu salud y recargarás tus baterías, no te sometas a sobreesfuerzos. ");
        }
    if((dia >= 21 && mes == 1)||(dia <= 19 && mes == 2)) {
        printf("Tu signo es Acuario. Se avecinan compras y gastos inesperados, tendrás que echar mano de tus ahorros. Puedes tener ingresos extra pero también gastos, trata de mantener un equilibrio. No te pongas de los nervios en tu empleo, porque tendrás tendencia a equivocarte. En el trabajo deberías plantearte objetivos realistas y actuar en consecuencia.\n");
        if(sexo == 'M')
            printf("Te vienen éxitos sentimentales romanticos pero también exigencias familiares. Reconoce tus errores y no te obceques discutiendo con tus amigos, ganarás más. Ve a cualquier sitio que te inviten porque puedes conocer a alguien interesante. \n");
        else if(sexo == 'F')
            printf("Te irá bien con tu pareja si dejas que lleve un poco la batuta a veces en el amor. Acata las señales que te manda tu cuerpo y no lo fuerces tanto, estás al límite de salud. ");
        }
    if((dia >= 24 && mes == 8)||(dia <= 23 && mes == 9)) {
        printf("Tu signo es Virgo. Irás resolviendo con facilidad los problemas que se planteen habitualmente. Harás algunos gastos para mejorar tu hogar o tu calidad de vida, te compensará. Podrás tener algo de suerte y no te vendría nada mal algo de dinero extra. Deberías decidir por ti este día, no hagas caso de lo que te digan. Tus amigos te apoyarán en el trabajo este día, cuenta con ellos. El temor al ridículo o a quedar mal no debe impedirte expresar tus sentimientos de amor.\n");
        if(sexo == 'M')
            printf("Tienes que organizar entre tus tareas y tu mujer, así podrás con todo y sin agobios. Te sientes con ánimo y estarás de buen humor, pasarás bien este día, estás bien de salud. \n");
        else if(sexo == 'F')
            printf("Tienes el humor cambiante por culpa del cansancio, tómate las cosas con calma.  ");
        }
    if((dia >= 20 && mes == 2)||(dia <= 20 && mes == 3)) {
        printf("Tu signo es Piscis. Revisa bien tus cuentas , porque podrían estarte cobrando dos veces una factura. Tus planes de trabajo se pueden estropear por falta de planificación, organízate. Si haces negocios con gente que no conoces bien, ata bien todo antes de firmar. Trata de no agobiarte con las responsabilidades, te puedes organizar mejor. Hay un problema familiar que te trae de cabeza, pero solo puedes esperar. Tienes tendencia a discutir, pero si pones de tu parte puedes evitarlo.\n");
        if(sexo == 'M')
            printf("En el amor, necesitas algo de aventura en tu vida, podrías caer en el aburrimiento. Tendrás molestias estomacales pero no te asustes, come ligero y notarás mejoría. \n");
        else if(sexo == 'F')
            printf("Estás pasando un periodo de altibajos en tu relacion, no te dejes llevar y mantén el control. Podrías hacerte daño o tener algún accidente doméstico, no grave, pero molesto ");
        }
    return 0;
}