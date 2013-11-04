// Datei : Texts.h

// --------------------------------------------------------------------------------------
//
// Beinhaltet die Defines und Funktionen f�r die Texte in Hurrican
// Es ist m�glich, verschiedene Language-Files zu laden
//
// (c) 2002-2004 J�rg M. Winterstein
//
// --------------------------------------------------------------------------------------

#ifndef _TEXTS_
#define _TEXTS_

#include "Main.h"
#include "Player.h"

// --------------------------------------------------------------------------------------
// Defines
// --------------------------------------------------------------------------------------

#define MAX_CHEATS 10

#define CHEAT_EXTRAS	0
#define CHEAT_WAFFEN	1
#define CHEAT_SCHILD	2
#define CHEAT_ZEIT		3
#define CHEAT_GOD		4
#define CHEAT_RAD	    5
#define CHEAT_AUTOFIRE	6
#define CHEAT_SUPERSHOT	7
#define CHEAT_FLAMER	8

// Enum f�r die verschiedenen Texte
// es wird nie konkret ein String im Code angegeben, sondern immer nur eine Zahl, welche
// einen Array-Eintrag im Text Array angibt.

typedef enum Textenum
{
	// Header des Language Files
	TEXT_HEADER,
	TEXT_HEADER2,
	TEXT_HEADER3,
	TEXT_HEADER4,
	TEXT_HEADER5,
	TEXT_HEADER6,
	TEXT_HEADER7,
	TEXT_HEADER8,
	TEXT_HEADER9,

	TEXT_SEPERATOR_STARTER,

	TEXT_STARTER_FULLSCREEN,
	TEXT_STARTER_STANDARD,
	TEXT_STARTER_START,
	TEXT_STARTER_CLOSE,
	TEXT_STARTER_CANCEL,
	TEXT_STARTER_LANG,
	TEXT_STARTER_UPDATE,
	TEXT_STARTER_NEWVERSION,
	TEXT_STARTER_NONEWVERSION,
	TEXT_STARTER_LEVELS,
	TEXT_STARTER_LOADLIST,
	TEXT_STARTER_CHOOSEPACK,
	TEXT_STARTER_DOWNLOAD,

	TEXT_SEPERATOR_MISC,

	TEXT_BENUTZTE_GRAFIK,
	TEXT_BENUTZTES_FILE,
	TEXT_LADE_BITMAP,
	TEXT_LADE_WAVE,
	TEXT_LADE_MODULE,
	TEXT_LADEN_ERFOLGREICH,
	TEXT_LADE_LEVELDATEN,

	TEXT_SEPERATOR_TUTORIAL,

	TEXT_TUTORIAL1,
	TEXT_TUTORIAL2,
	TEXT_TUTORIAL3,
	TEXT_TUTORIAL4,
	TEXT_TUTORIAL5,
	TEXT_TUTORIAL6,
	TEXT_TUTORIAL7,
	TEXT_TUTORIAL8,
	TEXT_TUTORIAL9,
	TEXT_TUTORIAL10,
	TEXT_TUTORIAL11,
	TEXT_TUTORIAL12,
	TEXT_TUTORIAL13,
	TEXT_TUTORIAL14,
	TEXT_TUTORIAL15,
	TEXT_TUTORIAL16,
	TEXT_TUTORIAL17,
	TEXT_TUTORIAL18,
	TEXT_TUTORIAL19,
	TEXT_TUTORIAL20,
	TEXT_TUTORIAL21,
	TEXT_TUTORIAL22,
	TEXT_TUTORIAL23,
	TEXT_TUTORIAL24,
	TEXT_TUTORIAL25,
	TEXT_TUTORIAL26,
	TEXT_TUTORIAL27,
	TEXT_TUTORIAL28,
	TEXT_TUTORIAL29,
	TEXT_TUTORIAL30,
	TEXT_TUTORIAL31,
	TEXT_TUTORIAL32,
	TEXT_TUTORIAL33,
	TEXT_TUTORIAL34,
	TEXT_TUTORIAL35,
	TEXT_TUTORIAL36,
	TEXT_TUTORIAL37,
	TEXT_TUTORIAL38,
	TEXT_TUTORIAL39,

	TEXT_SEPERATOR_CONSOLE,

	TEXT_CONSOLE1,
	TEXT_CONSOLE2,
	TEXT_CONSOLE3,
	TEXT_CONSOLE4,
	TEXT_CONSOLE5,
	TEXT_CONSOLE6,
	TEXT_CONSOLE7,
	TEXT_CONSOLE8,
	TEXT_CONSOLE9,

	TEXT_SEPERATOR_SUMMARY,

	TEXT_SUMMARY_TITLE,
	TEXT_SUMMARY_SECRETS,
	TEXT_SUMMARY_CHEATUNLOCK,
	TEXT_SUMMARY_PRESSFIRE,

	TEXT_SEPERATOR_MENU,

	TEXT_MENUE_LOADING,
	TEXT_MENUE_SPIEL_SPEICHERN,
	TEXT_MENUE_SPIEL_STARTEN,
	TEXT_MENUE_SPIEL_FORTSETZEN,
	TEXT_MENUE_EINSTELLUNGEN,
	TEXT_MENUE_HIGHSCORES,
	TEXT_MENUE_CREDITS,
	TEXT_MENUE_QUIT,

	TEXT_MENUE_TUTORIAL_SPIELEN,
	TEXT_MENUE_NEUES_SPIEL_STARTEN,
	TEXT_MENUE_ALTES_SPIEL_FORTSETZEN,

	TEXT_MENUE_LEICHT,
	TEXT_MENUE_MITTEL,
	TEXT_MENUE_SCHWER,
	TEXT_MENUE_TURRICAN,

	TEXT_MENUE_ANLEITUNG,

	TEXT_HIGHSCORE_PLATZ,
	TEXT_HIGHSCORE_NAME,
	TEXT_HIGHSCORE_PUNKTE,
	TEXT_HIGHSCORE_STAGE,
	TEXT_HIGHSCORE_SKILL,

	TEXT_VOLUMES,
	TEXT_SOUND,
	TEXT_MUSIK,
	TEXT_STEUERUNG,

	TEXT_SPRACHE,
	TEXT_JOYMODE,
	TEXT_FORECEFEEDBACK,
	TEXT_SENSIBILITY,

	TEXT_JOYMODE_PAD,
	TEXT_JOYMODE_STICK,

	TEXT_WAHNSINN,
	TEXT_NEUE_HIGHSCORE,
	TEXT_NAMEN_EINGEBEN,
	TEXT_WEITER,
	TEXT_ZURUECK,
	TEXT_TASTEN_L,
	TEXT_TASTEN_R,
	TEXT_TASTEN_DUCKEN,
	TEXT_TASTEN_OBEN,
	TEXT_TASTEN_UNTEN,
	TEXT_TASTEN_SPRUNG,
	TEXT_TASTEN_SCHUSS,
	TEXT_TASTEN_BLITZ,
	TEXT_TASTEN_POWERLINE,
	TEXT_TASTEN_GRANATE,
	TEXT_TASTEN_SCHOCK,
	TEXT_TASTEN_WAFFEWECHSELN,
	TEXT_JOY_LAUFEN,
	TEXT_JOY_SCHAUEN,
	TEXT_JOY_ACHSE,
	TEXT_JOY_COOLIE,
	TEXT_TASTEN_NEU_T,
	TEXT_TASTEN_NEU_B,
	TEXT_DETAIL_LOW,
	TEXT_DETAIL_MEDIUM,
	TEXT_DETAIL_HIGH,
	TEXT_DETAIL_MAXIMUM,
	TEXT_ONE_PLAYER,
	TEXT_TWO_PLAYERS,
	TEXT_PLAYER_ONE,
	TEXT_PLAYER_TWO,
	TEXT_TYP,
	TEXT_MODUS,
	TEXT_EMPFINDLICHKEIT,
	TEXT_KEYBOARD,
	TEXT_NICHT_DEFINIERT,

	TEXT_SAVE_STAGE,
	TEXT_SAVE_SPIELER,
	TEXT_SAVE_DATUM,
	TEXT_SAVE_LEER,

	TEXT_SECRET,

	TEXT_LEFT,
	TEXT_RIGHT,
	TEXT_UP,
	TEXT_DOWN,
	TEXT_BUTTON,

	TEXT_SEPERATOR_HINTS,

	TEXT_HINT1,
	TEXT_HINT2,
	TEXT_HINT3,
	TEXT_HINT4,
	TEXT_HINT5,
	TEXT_HINT6,
	TEXT_HINT7,
	TEXT_HINT8,
	TEXT_HINT9,
	TEXT_HINT10,
	TEXT_HINT11,
	TEXT_HINT12,
	TEXT_HINT13,
	TEXT_HINT14,
	TEXT_HINT15,
	TEXT_HINT16,
	TEXT_HINT17,
	TEXT_HINT18,
	TEXT_HINT19,
	TEXT_HINT20,
	TEXT_HINT21,
	TEXT_HINT22,
	TEXT_HINT23,
	TEXT_HINT24,
	TEXT_HINT25,
	TEXT_HINT26,
	TEXT_HINT27,
	TEXT_HINT28,
	TEXT_HINT29,
	TEXT_HINT30,

	TEXT_SEPERATOR_PISSEN,

	TEXT_PISS_1,
	TEXT_PISS_2,
	TEXT_PISS_3,
	TEXT_PISS_4,
	TEXT_PISS_5,
	TEXT_PISS_6,
	TEXT_PISS_7,
	TEXT_PISS_8,
	TEXT_PISS_9,
	TEXT_PISS_10,
	TEXT_PISS_11,
	TEXT_PISS_12,
	TEXT_PISS_13,
	TEXT_PISS_14,
	TEXT_PISS_15,
	TEXT_PISS_16,
	TEXT_PISS_17,
	TEXT_PISS_18,

	TEXT_SEPERAROT_INTRO,

	TEXT_INTRO1,
	TEXT_INTRO2,
	TEXT_INTRO3,
	TEXT_INTRO4,

	TEXT_INTRO5,
	TEXT_INTRO6,
	TEXT_INTRO7,
	TEXT_INTRO8,

	TEXT_INTRO9,
	TEXT_INTRO10,
	TEXT_INTRO11,
	TEXT_INTRO12,

	TEXT_INTRO13,
	TEXT_INTRO14,
	TEXT_INTRO15,
	TEXT_INTRO16,

	TEXT_INTRO17,
	TEXT_INTRO18,
	TEXT_INTRO19,
	TEXT_INTRO20,

	TEXT_INTRO21,
	TEXT_INTRO22,
	TEXT_INTRO23,
	TEXT_INTRO24,
	TEXT_INTRO25,

	TEXT_SEPERATOR_OUTTRO,

	TEXT_OUTTRO1,
	TEXT_OUTTRO2,
	TEXT_OUTTRO3,
	TEXT_OUTTRO4,
	TEXT_OUTTRO5,
	TEXT_OUTTRO6,
	TEXT_OUTTRO7,
	TEXT_OUTTRO8,
	TEXT_OUTTRO9,
	TEXT_OUTTRO10,
	TEXT_OUTTRO11,

	TEXT_SEPERATOR_MARIO,

	TEXT_MARIO1,
	TEXT_MARIO2,
	TEXT_MARIO3,
	TEXT_MARIO4,
	TEXT_MARIO5,
	TEXT_MARIO6,
	TEXT_MARIO7,

	TEXT_LASTTEXT,
} TEXTENUM_T;

// --------------------------------------------------------------------------------------
// Funktionen
// --------------------------------------------------------------------------------------

bool LoadLanguage  (char *filename);			// Bestimmte Sprachdatei laden
void InitReplacers (void);						// Tasten ErsetzungsStrings f�r die TutorialTexte initialisieren
int	 GetDecValue(char *pair, int len);			// Dezimalwert einer Hexzahl mit L�nge len

// --------------------------------------------------------------------------------------
// Externals
// --------------------------------------------------------------------------------------

extern char				    TextArray [TEXT_LASTTEXT][1024];
extern char					ActualLanguage[256];
extern int					LanguageFileCount;				// Anzahl gefundener Language Files
extern char					LanguageFiles[20][256];			// Strings, die die Filenamen der LanguageFiles beinhalten						// Endbild der Demo
extern char					s_Replacers[MAX_AKTIONEN * 2][256];
extern char					Cheats[MAX_CHEATS][256];


#endif

