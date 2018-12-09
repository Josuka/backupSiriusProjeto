//DECLARA ALLEGRO
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_acodec.h>
//DECLARA C
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <allegro5/allegro.h>


// CONSTANTES DO DISPLAY
const int LARGURA_TELA = 1280;
const int ALTURA_TELA = 720;

//const int LARGURA_TELA = 960;
//const int ALTURA_TELA = 540;


//PARTES DO JOGO
#define P_APRESENTACAO 0
#define P_MENU 1
#define P_BOASVINDAS 2
#define P_TRANSICAO_NIVEL_1 3
#define P_NIVEL_1 4
#define P_TRANSICAO_NIVEL_2 5
#define P_NIVEL_2 6
#define P_FINAL 9


//VARIAVEIS ALLEGRO
ALLEGRO_DISPLAY *janela = NULL;
ALLEGRO_EVENT_QUEUE *fila_eventos = NULL;
ALLEGRO_FONT *titulo = NULL;
ALLEGRO_FONT *fonte = NULL;
ALLEGRO_BITMAP *x = NULL;
ALLEGRO_COLOR cor_menu;
ALLEGRO_COLOR cor_titulo;
ALLEGRO_BITMAP *tela_inicio = NULL;
ALLEGRO_BITMAP *explica_planeta[8] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
ALLEGRO_BITMAP *avaliacao_planeta[8] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};

ALLEGRO_BITMAP *estados[26] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};

ALLEGRO_BITMAP *terra_concluida = NULL;

    ALLEGRO_BITMAP *acre = NULL;
    ALLEGRO_BITMAP *alagoas = NULL;
    ALLEGRO_BITMAP *amapa = NULL;
    ALLEGRO_BITMAP *amazonas = NULL;
    ALLEGRO_BITMAP *bahia = NULL;
    ALLEGRO_BITMAP *ceara = NULL;
    ALLEGRO_BITMAP *espirito_santo = NULL;
    ALLEGRO_BITMAP *goias = NULL;
    ALLEGRO_BITMAP *maranhao = NULL;
    ALLEGRO_BITMAP *mato_grosso = NULL;
    ALLEGRO_BITMAP *mato_grosso_do_sul = NULL;
    ALLEGRO_BITMAP *minas_gerais = NULL;
    ALLEGRO_BITMAP *para = NULL;
    ALLEGRO_BITMAP *paraiba = NULL;
    ALLEGRO_BITMAP *parana = NULL;
    ALLEGRO_BITMAP *pernambuco = NULL;
    ALLEGRO_BITMAP *piaui = NULL;
    ALLEGRO_BITMAP *rio_de_janeiro = NULL;
    ALLEGRO_BITMAP *rio_grande_do_norte = NULL;
    ALLEGRO_BITMAP *rio_grande_do_sul = NULL;
    ALLEGRO_BITMAP *rondonia = NULL;
    ALLEGRO_BITMAP *roraima = NULL;
    ALLEGRO_BITMAP *santa_catarina = NULL;
    ALLEGRO_BITMAP *sao_paulo = NULL;
    ALLEGRO_BITMAP *sergipe = NULL;
    ALLEGRO_BITMAP *tocantins = NULL;

ALLEGRO_BITMAP *qual_nome_estado = NULL;

//VARIAVEIS DE CONTROLE
int controle = 0;
int atual_estado = 0;

int inicializar(){
	printf(">>> Iniciando o jogo...\n");
	int sucesso = 0;

	printf(">>> Iniciando Funcoes\n");
	if(!al_init()){
		fprintf(stderr, "al_init\n");
	}else if(!(janela = al_create_display(LARGURA_TELA,ALTURA_TELA))){
		fprintf(stderr, "al_create_display\n");
	}else if(!al_init_primitives_addon()){
		fprintf(stderr, "al_init_primitives_addon\n");
	}else if (!al_init_font_addon()) {
		fprintf(stderr, "inicializa_font\n");
	}else if(!(titulo = al_load_font("res/font/comic.ttf", 32, 0))){
		fprintf(stderr, "erro na fonte do titulo\n");
	}else if(!al_install_keyboard()){
		fprintf(stderr, "al_install_keyboard\n");
	}else if(!al_install_joystick()){
		fprintf(stderr, "al_install_joystick\n");
	}else if(!al_install_mouse()){
		fprintf(stderr, "al_install_mouse\n");
	}else if (!(fila_eventos = al_create_event_queue())) {
		fprintf(stderr, "al_create_event_queue\n");
	}else if(!al_install_mouse()){
		fprintf(stderr, "al_install_mouse\n");
	}else if(!al_init_image_addon()){
		fprintf(stderr, "al_init_image_addon\n");
	}else {
		sucesso = 1;

        al_set_window_title(janela, "*SELBY SPACE*");// DEFINE NOME DA JANELA
        //al_set_window_position(janela, 320, 0);
        al_register_event_source(fila_eventos, al_get_display_event_source(janela)); /*Registra os eventos que ocorrem dentro da janela*/
        al_register_event_source(fila_eventos, al_get_keyboard_event_source()); /*Registra os eventos do teclado*/

        printf(">>> Funcoes Iniciadas\n");
    }
}


void troca_tela(ALLEGRO_BITMAP *img1, ALLEGRO_BITMAP *img2){
	al_destroy_bitmap(img1);
	al_flip_display();
	al_draw_bitmap(img2, 0, 0, 0);
	al_flip_display();
}

void alternativas(int atual_estado){
    int n_alternativa = 1;
    int atual_estado = 0;
    switch(n_alternativa){

        case 1:
            al_draw_bitmap(sao_paulo, 900, 200, 0);
            al_draw_bitmap(acre, 900, 300, 0);
            al_draw_bitmap(amapa, 900, 400, 0);
            al_flip_display();

            if (evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if (evento.mouse.x >= LARGURA_TELA - al_get_bitmap_width(acre) - 10 &&
                evento.mouse.x <= LARGURA_TELA - 10 && evento.mouse.y <= ALTURA_TELA - 10 &&
                evento.mouse.y >= ALTURA_TELA - al_get_bitmap_height(acre) - 10){
                    n_alternativas++;
                    atual_estado++;
                }
            }
        break;

        case 2:
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_bitmap(alagoas, 900, 200, 0);
            al_draw_bitmap(bahia, 900, 300, 0);
            al_draw_bitmap(tocantins, 900, 400, 0);
            al_flip_display();

            if (evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if (evento.mouse.x >= LARGURA_TELA - al_get_bitmap_width(alagoas) - 10 &&
                evento.mouse.x <= LARGURA_TELA - 10 && evento.mouse.y <= ALTURA_TELA - 10 &&
                evento.mouse.y >= ALTURA_TELA - al_get_bitmap_height(alagoas) - 10){
                    n_alternativas++;
                    atual_estado++;
                }
            }
        break;

    }


}

/*void verifica_correta(){
    if (evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if (evento.mouse.x >= LARGURA_TELA - al_get_bitmap_width(acre) - 10 &&
                evento.mouse.x <= LARGURA_TELA - 10 && evento.mouse.y <= ALTURA_TELA - 10 &&
                evento.mouse.y >= ALTURA_TELA - al_get_bitmap_height(acre) - 10) n_alternativas++;
    }
}*/


void desenha_estado(int atual_estado){
    atual_estado = 0;
    while (atual_estado<=26){
        al_draw_bitmap(estados[atual_estado], 0, 0, 0);
        al_draw_bitmap(qual_nome_estado, 650, 100, 0);
        al_flip_display();
        alternativas(atual_estado);
        al_destroy_bitmap(estados[atual_estado-1]);
    }
    al_draw_bitmap(terra_concluida, 0, 0, 0);
    al_rest(3.0);
}


void mover_bitmap_em_x(ALLEGRO_BITMAP *bitmap, int x, int max){
    if(x < max){
        while(x <= max){
            al_draw_bitmap(bitmap, x, 0, 0);
            al_flip_display();
            x = x + 100;
            al_clear_to_color(al_map_rgb(0,0,0));
        }
    }
    else if(x > max){
        while(x >= max){
            al_draw_bitmap(bitmap, x, 0, 0);
            al_flip_display();
            x = x - 100;
            al_clear_to_color(al_map_rgb(0,0,0));
        }
    }
}

void intercala_tela(ALLEGRO_BITMAP *img1, ALLEGRO_BITMAP *img2, float tempo_de_trocar, int temporizador){
    int mudanca = 1;
    while(temporizador != 0){
        if (temporizador > 0) temporizador--;
            if(mudanca == 1){
                al_draw_bitmap(img1, 0, 0, 0);
                al_flip_display();
                al_clear_to_color(al_map_rgb(0, 0, 0));
                mudanca = mudanca * -1;
                al_rest(tempo_de_trocar);
            }
            if(mudanca == -1){
                al_draw_bitmap(img2, 0, 0, 0);
                al_flip_display();
                al_clear_to_color(al_map_rgb(0, 0, 0));
                mudanca = mudanca * -1;
                al_rest(tempo_de_trocar);
        }
    }
}


void destroy(){
	if(janela)	al_destroy_display(janela);
	if(titulo) al_destroy_font(titulo);
	if(fonte) al_destroy_font(fonte);
	if(titulo) al_destroy_font(titulo);
	if(fila_eventos) al_destroy_event_queue(fila_eventos);
	al_uninstall_mouse();
	al_uninstall_keyboard();
	al_uninstall_joystick();
	al_uninstall_audio();
	al_shutdown_image_addon();
	al_shutdown_ttf_addon();
	al_shutdown_font_addon();
	al_shutdown_primitives_addon();
}


void apresentacao(){
	printf(">>> Declara vetor da apresentacao");
	ALLEGRO_BITMAP *apresentacao[10] = {NULL, NULL, NULL, NULL, NULL,NULL, NULL, NULL, NULL, NULL};//VARIAVEL DA APRESENTAÇÂO

	printf(">>> Atribui valor ao vetor apresentação\n");
	apresentacao[0] = al_load_bitmap("res/img/01_APRESENTACAO/a1.bmp");
	apresentacao[1] = al_load_bitmap("res/img/01_APRESENTACAO/a2.bmp");
	apresentacao[2] = al_load_bitmap("res/img/01_APRESENTACAO/a3.bmp");
	apresentacao[3] = al_load_bitmap("res/img/01_APRESENTACAO/a4.bmp");
	apresentacao[4] = al_load_bitmap("res/img/01_APRESENTACAO/a5.bmp");
	apresentacao[5] = al_load_bitmap("res/img/01_APRESENTACAO/a6.bmp");
	apresentacao[6] = al_load_bitmap("res/img/01_APRESENTACAO/a7.bmp");
	apresentacao[7] = al_load_bitmap("res/img/01_APRESENTACAO/a8.bmp");
	apresentacao[8] = al_load_bitmap("res/img/01_APRESENTACAO/a9.bmp");
	apresentacao[9] = al_load_bitmap("res/img/01_APRESENTACAO/a10.bmp");

	printf(">>> Valores atribuidos\n");

	printf(">>> Inicializa apresenação\n");
	al_draw_bitmap(apresentacao[0], 0, 0, 0);
	al_rest(1.0);
	al_flip_display();
	troca_tela(apresentacao[0], apresentacao[1]);
	al_rest(2.5);
	troca_tela(apresentacao[1], apresentacao[2]);
	al_rest(0.1);
	troca_tela(apresentacao[2], apresentacao[3]);
	al_rest(0.1);
	troca_tela(apresentacao[3], apresentacao[4]);
	al_rest(0.1);
	troca_tela(apresentacao[4], apresentacao[5]);
	al_rest(0.1);
	troca_tela(apresentacao[5], apresentacao[6]);
	al_rest(0.1);
	troca_tela(apresentacao[6], apresentacao[7]);
	al_rest(0.1);
	troca_tela(apresentacao[7], apresentacao[8]);
	al_rest(0.1);
	troca_tela(apresentacao[8], apresentacao[9]);
	al_destroy_bitmap(apresentacao[9]);
	//al_flip_display();

	printf(">>> Finaliza apresentação\n");


	controle++;
}

void desenha_tela_inicio(){
	printf(">>> Inicia função desenha tela inicio\n");
	tela_inicio = al_load_bitmap("res/img/02_MENU/menu.bmp");

	printf(">>> Tela de inicio desenhada\n");
}


/*void transicoes_tela(int i){
    explica_planeta[0] = al_load_bitmap("res/img/transicoes_de_tela/transicaoMercurio.jpg");
    explica_planeta[1] = al_load_bitmap("res/img/transicoes_de_tela/transicaoVenus.jpg");
    explica_planeta[2] = al_load_bitmap("res/img/transicoes_de_tela/transicaoTerra.jpg");
    explica_planeta[3] = al_load_bitmap("res/img/transicoes_de_tela/transicaoMarte.jpg");
    explica_planeta[4] = al_load_bitmap("res/img/transicoes_de_tela/transicaoJupiter.jpg");
    explica_planeta[5] = al_load_bitmap("res/img/transicoes_de_tela/transicaoSaturno.jpg");
    explica_planeta[6] = al_load_bitmap("res/img/transicoes_de_tela/transicaoUrano.jpg");
    explica_planeta[7] = al_load_bitmap("res/img/transicoes_de_tela/transicaoNetuno.jpg");

    if(i < 8){
    al_draw_bitmap(explica_planeta[i], 0, 0, 0);
    i++;
    }
}*/


void menu(){
//printf("f %d  ", fonte);
    //fonte = al_load_font("res/font/comic.ttf", 42, 0);
    //printf("f %d  ", fonte);
	printf(">>> Inicio funcao menu\n");
	//al_draw_text(word_font, al_map_rgb(0, 0, 0), LARGURA_TELA / 2, ALTURA_TELA / 2, ALLEGRO_ALIGN_LEFT, "tsst");
	//al_flip_display();
	desenha_tela_inicio();



	{
		if(pega_tecla() != 1){
			controle++;

		}

		controle++;


	}
}

void boas_vindas(){
	ALLEGRO_BITMAP *boasvindas[4] = {NULL,NULL,NULL,NULL};
	int i = 0;

    /*explica_planeta[0] = al_load_bitmap("res/img/transicoes_de_tela/transicaoMercurio.jpg");
    explica_planeta[1] = al_load_bitmap("res/img/transicoes_de_tela/transicaoVenus.png");
    explica_planeta[2] = al_load_bitmap("res/img/transicoes_de_tela/transicaoTerra.jpg");
    explica_planeta[3] = al_load_bitmap("res/img/transicoes_de_tela/transicaoMarte.jpg");
    explica_planeta[4] = al_load_bitmap("res/img/transicoes_de_tela/transicaoJupiter.jpg");
    explica_planeta[5] = al_load_bitmap("res/img/transicoes_de_tela/transicaoSaturno.jpg");
    explica_planeta[6] = al_load_bitmap("res/img/transicoes_de_tela/transicaoUrano.jpg");
    explica_planeta[7] = al_load_bitmap("res/img/transicoes_de_tela/transicaoNetuno.jpg");

    avaliacao_planeta[0] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_mercurio.jpg");
    avaliacao_planeta[1] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_venus.jpg");
    avaliacao_planeta[2] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_terra.jpg");
    avaliacao_planeta[3] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_marte.jpg");
    avaliacao_planeta[4] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_jupiter.jpg");
    avaliacao_planeta[5] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_saturno.jpg");
    avaliacao_planeta[6] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_urano.jpg");
    avaliacao_planeta[7] = al_load_bitmap("res/img/transicoes_de_tela/avaliacao_netuno.jpg");*/

    //al_clear_to_color(al_map_rgb(0,0,0));

	/*boasvindas[0] = al_load_bitmap("res/img/03_BOASVINDAS/b1.bmp");
	boasvindas[1] = al_load_bitmap("res/img/03_BOASVINDAS/b2.bmp");
	boasvindas[2] = al_load_bitmap("res/img/03_BOASVINDAS/b3.bmp");
	boasvindas[3] = al_load_bitmap("res/img/03_BOASVINDAS/b4.bmp");

	al_draw_bitmap(boasvindas[0], 0, 0, 0);
	al_flip_display();
	al_rest(1.0);

	intercala_tela(boasvindas[1], boasvindas[2], 0.5, 5);
	al_destroy_bitmap(boasvindas[0]);

	al_draw_bitmap(boasvindas[3], 0, 0, 0);
	al_flip_display();
	al_rest(1.0);

	al_destroy_bitmap(boasvindas[1]);
	al_destroy_bitmap(boasvindas[2]);*/



	//outras transicoes
	/*al_draw_bitmap(explica_planeta[0], 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[0], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[0]);

    al_draw_bitmap(explica_planeta[1], 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[1], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[1]);

    al_draw_bitmap(explica_planeta[2], 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[2], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[2]);

    al_draw_bitmap(explica_planeta[3, 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[3], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[3]);

    al_draw_bitmap(explica_planeta[4], 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[4], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[4]);

    al_draw_bitmap(explica_planeta[5], 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[5], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[5]);

    al_draw_bitmap(explica_planeta[6], 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[6], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[6]);

    al_draw_bitmap(explica_planeta[7], 0, 0, 0);
	al_flip_display();
	al_rest(15.0);
	mover_bitmap_em_x(avaliacao_planeta[7], 0, -2560);
	al_destroy_bitmap(avaliacao_planeta[7]);*/
    desenha_estado(atual_estado);

    /*while(i < 8){
    al_draw_bitmap(explica_planeta[i], 0, 0, 0);

        if(pega_tecla() != 1){
			i++;
			al_clear_to_color(al_map_rgb(0,0,0));
        }
    }*/
	//al_destroy_bitmap(boasvindas[3]);

	//al_rest(7.0);
    //al_clear_to_color(al_map_rgb(0, 0, 0));

    //transicoes_tela(i);
	controle++;
}



/*void jogo(){
    int i =0;
    transicoes_tela(i);
}*/


void fase_terra(){
    estados[0] = al_load_bitmap("res/img/fase_Terra/estados/posicao_acre.jpg");
    estados[1] = al_load_bitmap("res/img/fase_Terra/estados/posicao_alagoas.jpg");
    estados[2] = al_load_bitmap("res/img/fase_Terra/estados/posicao_amapa.jpg");
    estados[3] = al_load_bitmap("res/img/fase_Terra/estados/posicao_amazonas.jpg");
    estados[4] = al_load_bitmap("res/img/fase_Terra/estados/posicao_bahia.jpg");
    estados[5] = al_load_bitmap("res/img/fase_Terra/estados/posicao_ceara.jpg");
    estados[6] = al_load_bitmap("res/img/fase_Terra/estados/posicao_espirito_santo.jpg");
    estados[7] = al_load_bitmap("res/img/fase_Terra/estados/posicao_goias.jpg");
    estados[8] = al_load_bitmap("res/img/fase_Terra/estados/posicao_maranhao.jpg");
    estados[9] = al_load_bitmap("res/img/fase_Terra/estados/posicao_mato_grosso.jpg");
    estados[10] = al_load_bitmap("res/img/fase_Terra/estados/posicao_mato_grosso_do_sul.jpg");
    estados[11] = al_load_bitmap("res/img/fase_Terra/estados/posicao_minas_gerais.jpg");
    estados[12] = al_load_bitmap("res/img/fase_Terra/estados/posicao_para.jpg");
    estados[13] = al_load_bitmap("res/img/fase_Terra/estados/posicao_paraiba.jpg");
    estados[14] = al_load_bitmap("res/img/fase_Terra/estados/posicao_parana.jpg");
    estados[15] = al_load_bitmap("res/img/fase_Terra/estados/posicao_pernambuco.jpg");
    estados[16] = al_load_bitmap("res/img/fase_Terra/estados/posicao_piaui.jpg");
    estados[17] = al_load_bitmap("res/img/fase_Terra/estados/posicao_rio_de_janeiro.jpg");
    estados[18] = al_load_bitmap("res/img/fase_Terra/estados/posicao_rio_grande_do_norte.jpg");
    estados[19] = al_load_bitmap("res/img/fase_Terra/estados/posicao_rio_grande_do_sul.jpg");
    estados[20] = al_load_bitmap("res/img/fase_Terra/estados/posicao_rondonia.jpg");
    estados[21] = al_load_bitmap("res/img/fase_Terra/estados/posicao_roraima.jpg");
    estados[22] = al_load_bitmap("res/img/fase_Terra/estados/posicao_santa_catarina.jpg");
    estados[23] = al_load_bitmap("res/img/fase_Terra/estados/posicao_sao_paulo.jpg");
    estados[24] = al_load_bitmap("res/img/fase_Terra/estados/posicao_sergipe.jpg");
    estados[25] = al_load_bitmap("res/img/fase_Terra/estados/posicao_tocantins.jpg");

    terra_concluida = al_load_bitmap("res/img/fase_Terra/estados/posicao_todos.jpg");

    acre = al_load_bitmap("res/img/fase_Terra/estados/acre.png");
    alagoas = al_load_bitmap("res/img/fase_Terra/estados/alagoas.png");
    amapa = al_load_bitmap("res/img/fase_Terra/estados/amapa.png");
    amazonas = al_load_bitmap("res/img/fase_Terra/estados/amazonas.png");
    bahia = al_load_bitmap("res/img/fase_Terra/estados/bahia.png");
    ceara = al_load_bitmap("res/img/fase_Terra/estados/ceara.png");
    espirito_santo = al_load_bitmap("res/img/fase_Terra/estados/espirito_santo.png");
    goias = al_load_bitmap("res/img/fase_Terra/estados/goias.png");
    maranhao = al_load_bitmap("res/img/fase_Terra/estados/maranhao.png");
    mato_grosso = al_load_bitmap("res/img/fase_Terra/estados/mato_grosso.png");
    mato_grosso_do_sul = al_load_bitmap("res/img/fase_Terra/estados/mato_grosso_do_sul.png");
    minas_gerais = al_load_bitmap("res/img/fase_Terra/estados/minas_gerais.png");
    para = al_load_bitmap("res/img/fase_Terra/estados/para.png");
    paraiba = al_load_bitmap("res/img/fase_Terra/estados/paraiba.png");
    parana = al_load_bitmap("res/img/fase_Terra/estados/parana.png");
    pernambuco = al_load_bitmap("res/img/fase_Terra/estados/pernambuco.png");
    piaui = al_load_bitmap("res/img/fase_Terra/estados/piaui.png");
    rio_de_janeiro = al_load_bitmap("res/img/fase_Terra/estados/rio_de_janeiro.png");
    rio_grande_do_norte = al_load_bitmap("res/img/fase_Terra/estados/rio_grande_do_norte.png");
    rio_grande_do_sul = al_load_bitmap("res/img/fase_Terra/estados/rio_grande_do_sul.png");
    roraima = al_load_bitmap("res/img/fase_Terra/estados/roraima.png");
    santa_catarina = al_load_bitmap("res/img/fase_Terra/estados/santa_catarina.png");
    sao_paulo = al_load_bitmap("res/img/fase_Terra/estados/sao_paulo.png");
    sergipe = al_load_bitmap("res/img/fase_Terra/estados/sergipe.png");
    tocantins = al_load_bitmap("res/img/fase_Terra/estados/tocantins.png");

    qual_nome_estado = al_load_bitmap("res/img/fase_Terra/estados/qual_nome_estado.png");
}


int main(){
	if(!inicializar()){
		return -1;
	}

	while(controle != P_FINAL){
		if(controle == P_APRESENTACAO){
			apresentacao();
		} else if(controle == P_MENU){
			menu();
		} else if(controle == P_BOASVINDAS){
			boas_vindas();
		} else if(controle == P_TRANSICAO_NIVEL_1){
            //jogo();
			printf("OKOK\n");
			break;
		}
	}



	destroy();
	return 0;
}



