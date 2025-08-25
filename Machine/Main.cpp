hits' => 'Naposledy zobrazené',
        'search' => 'Výsledky hledání',
        'favpics'=> 'Oblíbené obrázky',
);


$lang_errors = array(
    'access_denied' => 'Nemáte oprávnění na tuto stránku.',
    'perm_denied' => 'Nemáte dostatečná práva pro potvrzení této operace.',
    'param_missing' => 'Skriptu nebyly předány potřebné parametry',
    'non_exist_ap' => 'Vybraná alba/obrázek neexistuje',
    'quota_exceeded' => 'Vyčerpal(a) jste místo na disku.<br /><br />Vaše kvóta je[quota]K, Vaše obrázky zbírají [space]K, přidáním tohoto obrázku byste svoji kvótu překročil',
    'gd_file_type_err' => 'Pokud používáte GD knihovnu jsou podporovány jen obrázky JPG a PNG',
    'invalid_image' => 'Tento obrázek je poškozen/porušen GD knihovna s ním nemůže pracovat.',
    'resize_failed' => 'Nelze vytvořit náhled či zmenšený obrázek',
    'no_img_to_display' => 'Zde není žádný obrázek, který byste si mohl(a) prohlédnout',
    'non_exist_cat' => 'Vybraná kategorie neexistuje',
    'orphan_cat' => 'Podkategorie nemá nadřízenou kategorii. Problém opravte přes nastavení kategorií.',
    'directory_ro' => 'Do adresáře \'%s\' nelze zapisovat (nedostatečná práva), obrázky nemohly být smazány.',
    'non_exist_comment' => 'Vybraný komentář neexistuje',
    'pic_in_invalid_album' => 'Obrázek(y) je/jsou v neexistující galerii (%s)!?',
    'banned' => 'Byl jste vykopnut z těchto stránek, není Vám umožněno je používat.',
    'not_with_udb' => 'Tato funkce je vypnutá jelikož je integrována ve fóru. Buď není požadovaná fukce dostupná na tomto systému, nebo tuto/tyto funci/e plní fórum.',
    'offline_title' => 'Odpojeno', //cpg1.3.0
    'offline_text' => 'Galerie je momentálně odpojena - prosím zkuste to znovu později', //cpg1.3.0
    'ecards_empty' => 'Momentálně nejsou k zobraní dostupné žádné záznamy o ecards. Ověřte prosím, že je zapnutá volba "ecard logging" v konfiguraci coppermine!', //cpg1.3.0
    'action_failed' => 'Akce selhala.  Coppermine není schopno váš požadavek zpracovat.', //cpg1.3.0
    'no_zip' => 'Knihovny potřebné pro zpracování ZIP souborů nejsou dostupné.  Prosím kontaktujte Vašeho administrátora aplikace Coppermine.', //cpg1.3.0
    'zip_type' => 'Nemáte povolení nahrávat na server soubory ZIP.', //cpg1.3.0
  'database_query' => 'Vyskytla se chyba pi databázovém dotazu.', //cpg1.4
  'non_exist_comment' => 'Vybraná komponenta neexistuje.', //cpg1.4
);

$lang_bbcode_help_title = 'bbcode pomoc'; //cpg1.4
$lang_bbcode_help = 'Následující značky mohou být užitečné: <li>[b]Bold[/b] =&gt; <b>Bold</b></li><li>[i]Italic[/i] =&gt; <i>Italic</i></li><li>[url=http://yoursite.com/]Url Text[/url] =&gt; <a href="http://yoursite.com">Url Text</a></li><li>[email]user@domain.com[/email] =&gt; <a href="mailto:user@domain.com">user@domain.com</a></li><li>[color=red]some text[/color] =&gt; <span style="color:red">nejaký text</span></li><li>[img]http://coppermine.sf.net/demo/images/red.gif[/img] => <img src="../images/red.gif" border="0" alt="" /></li>'; //cpg1.4

// ------------------------------------------------------------------------- //
// File theme.php
// ------------------------------------------------------------------------- //

$lang_main_menu = array(
  'home_title' => 'Jít na domovskou stránku',
  'home_lnk' => 'Domů',
    'alb_list_title' => 'Přejít na seznam alb',
    'alb_list_lnk' => 'Seznam alb',
    'my_gal_title' => 'Přejít do mé osobní galerie',
    'my_gal_lnk' => 'Moje galerie',
  'my_prof_title' => 'Přejít do mého osobního profilu', //cpg1.4
    'my_prof_lnk' => 'Můj Profil',
    'adm_mode_title' => 'Do Admin módu',
    'adm_mode_lnk' => 'Admin mód',
    'usr_mode_title' => 'Do uživatelského módu',
    'usr_mode_lnk' => 'Uživatelský mód',
    'upload_pic_title' => 'Nahrát obrázek do alba',
    'upload_pic_lnk' => 'Upload obrázku',
    'register_title' => 'Vytvořit účet',
    'register_lnk' => 'Registrovat se',
  'login_title' => 'Přihlášení', //cpg1.4
    'login_lnk' => 'Přihlásit',
  'logout_title' => 'Odhlášení', //cpg1.4
    'logout_lnk' => 'Odhlásit',
  'lastup_title' => 'Ukaž nejnovější obrázky', //cpg1.4
'lastup_lnk' => 'Nejnovější obrázky',
  'lastcom_title' => 'Ukaž poslední komentáře', //cpg1.4
    'lastcom_lnk' => 'Poslední komentáře',
  'topn_title' => 'Ukaž nejprohlíženější', //cpg1.4
    'topn_lnk' => 'Nejprohlíženější',
  'toprated_title' => 'Ukaž nejlépe hodnocené', //cpg1.4
    'toprated_lnk' => 'Nejlépe hodnocené',
  'search_title' => 'Hledej', //cpg1.4
    'search_lnk' => 'Vyhledávání',
  'fav_title' => 'Jdi na oblíbené', //cpg1.4
    'fav_lnk' => 'Oblíbené',
    'memberlist_title' => 'Ukaž seznam členů', //cpg1.3.0
    'memberlist_lnk' => 'Seznam členů', //cpg1.3.0
  'faq_title' => 'FAQ = nejčastěji kladené otázky na galerii &quot;Coppermine&quot;',
  'faq_lnk' => 'FAQ',
);

$lang_gallery_admin_menu = array(
  'upl_app_title' => 'Potvrzení nového uploadu', //cpg1.4
    'upl_app_lnk' => 'Potvrzení uploadu',
  'admin_title' => 'Konfigurovat', //cpg1.4
  'admin_lnk' => 'Konfigurace', //cpg1.4
  'albums_title' => 'Konfigurace alb', //cpg1.4
    'albums_lnk' => 'Konfigurace alb',
  'categories_title' => 'Konfigurovat kategorie', //cpg1.4
    'categories_lnk' => 'Konfigurace kategorií',
  'users_title' => 'Nastavit uživatele', //cpg1.4
    'users_lnk' => 'Uživatelé',
  'groups_title' => 'Konfigurovat uživatelské skupiny', //cpg1.4
    'groups_lnk' => 'Už. skupiny',
  'comments_title' => 'Přehled komentářů', //cpg1.4
    'comments_lnk' => 'Komentáře',
  'searchnew_title' => 'Přidání více obrázků najednou', //cpg1.4
    'searchnew_lnk' => 'Dávkové přidání obrázků',
  'util_title' => 'Změnit velikost atd...', //cpg1.4
    'util_lnk' => 'Administrátorské nástroje',
  'key_title' => 'Slovník klíčových slov', //cpg1.4
  'key_lnk' => 'Slovník klíčových slov', //cpg1.4
  'ban_title' => 'Odstranit uživatele', //cpg1.4
    'ban_lnk' => 'Odstranit uživatele',
  'db_ecard_title' => 'Zobrazit Ecards', //cpg1.4
  'db_ecard_lnk' => 'Zobrazit Ecards',
  'pictures_title' => 'Setřídit obrázky', //cpg1.4
  'pictures_lnk' => 'Setřídit obrázky', //cpg1.4
  'documentation_lnk' => 'Dokumentatace', //cpg1.4
  'documentation_title' => 'Coppermine manual', //cpg1.4
);

$lang_user_admin_menu = array(
  'albmgr_title' => 'Vytvořit / organizovat moje alba', //cpg1.4
    'albmgr_lnk' => 'Vytvořit / organizovat moje alba',
  'modifyalb_title' => 'Změnit moje alba',  //cpg1.4
    'modifyalb_lnk' => 'Změnit moje alba',
  'my_prof_title' => 'Můj profil', //cpg1.4
    'my_prof_lnk' => 'Můj profil',
);

$lang_cat_list = array(
  'category' => 'Kategorie',
  'albums' => 'Alba',
  'pictures' => 'Obrázky',
);

$lang_album_list = array(
  'album_on_page' => '%d album na %d stránce(kách)',
);

$lang_thumb_view = array(
  'date' => 'DATUM',
  //Sort by filename and title
  'name' => 'JMÉNO SOUBORU',
  'title' => 'NADPIS',
    'sort_da' => 'Řadit vzestupně podle data',
    'sort_dd' => 'Řadit sestupně podle data',
    'sort_na' => 'Řadit vzestupně podle jména',
    'sort_nd' => 'Řadit sestupně podle jména',
    'sort_ta' => 'Řadit vzestupně podle nadpisu',
    'sort_td' => 'Řadit sestupně podle nadpisu',
  'position' => 'POZICE', //cpg1.4
  'sort_pa' => 'Řadit vzestupně podle pozice', //cpg1.4
  'sort_pd' => 'Řadit sestupně podle pozice', //cpg1.4
    'download_zip' => 'Download jako Zip soubor', //cpg1.3.0
    'pic_on_page' => '%d obrázků na %d stránkách',
    'user_on_page' => '%d uživatelů na %d stránkách',
  'enter_alb_pass' => 'Vlož heslo pro album', //cpg1.4
  'invalid_pass' => 'Vadné heslo', //cpg1.4
  'pass' => 'Heslo', //cpg1.4
  'submit' => 'Odeslat', //cpg1.4
);

$lang_img_nav_bar = array(
    'thumb_title' => 'Zpět na stránku s náhledy',
    'pic_info_title' => 'Zobraz/skryj informace o obrázku',
    'slideshow_title' => 'Slideshow',
    'ecard_title' => 'Poslat tento obrázek jako pohlednici',
    'ecard_disabled' => 'Pohlednice jsou vypnuté',
    'ecard_disabled_msg' => 'Nemáte dostatečná práva pro zaslání pohlednice',
    'prev_title' => 'Předchozí obrázek',
    'next_title' => 'Další obrázek',
    'pic_pos' => 'OBRÁZEK %s/%s',
  'report_title' => 'Odešsli tento soubor administrátorovi', //cpg1.4
  'go_album_end' => 'Skok na konec', //cpg1.4
  'go_album_start' => 'Skok na začátek', //cpg1.4
  'go_back_x_items' => 'zpět o %s položzky', //cpg1.4
  'go_forward_x_items' => 'dopřredu o %s položzky', //cpg1.4
);

$lang_rate_pic = array(
    'rate_this_pic' => 'Hodnotit tento obrázek ',
    'no_votes' => '(žádné hodnocení)',
    'rating' => '(Aktuální hodnocení : %s / z 5, hlasováno %s krát)',
    'rubbish' => 'Hnusný',
    'poor' => 'Mizerný',
    'fair' => 'Ujde to',
    'good' => 'Dobrý',
    'excellent' => 'Výborný',
    'great' => 'Dokonalý',
);

// ------------------------------------------------------------------------- //
// File include/exif.inc.php
// ------------------------------------------------------------------------- //

// void

// ------------------------------------------------------------------------- //
// File include/functions.inc.php
// ------------------------------------------------------------------------- //

$lang_cpg_die = array(
  INFORMATION => $lang_info,
  ERROR => $lang_error,
    CRITICAL_ERROR => 'Kritická chyba',
    'file' => 'Soubor: ',
    'line' => 'Řádka: ',
);

$lang_display_thumbnails = array(
    'filename' => 'Jméno souboru : ',
    'filesize' => 'Velikost souboru : ',
    'dimensions' => 'Rozměry : ',
    'date_added' => 'Datum přidání : '
);

$lang_get_pic_data = array(
    'n_comments' => '%s Komentář(ů)',
    'n_views' => '%s zobrazení',
    'n_votes' => '(%s hlas(ů))'
);

$lang_cpg_debug_output = array(
  'debug_info' => 'Debug Info', //cpg1.3.0
  'select_all' => 'Vybrat vše', //cpg1.3.0
  'copy_and_paste_instructions' => 'Pokud se chystáte požadovat pomoc na podpoře coppermine, vložte tento ladící výstup do vašecho příspěvku. Před takovým vložením se ujistěte, že jste všechna vaše hesla z tohoto textu nahradili pomocí "***".', //cpg1.3.0
  'phpinfo' => 'Zobrazit phpinfo', //cpg1.3.0
  'notices' => 'Poznámky', //cpg1.4
);

$lang_language_selection = array(
  'reset_language' => 'Přednastavený jazyk', //cpg1.3.0
  'choose_language' => 'Vyberte Váš jazyk', //cpg1.3.0
);

$lang_theme_selection = array(
  'reset_theme' => 'Přednastavené téma', //cpg1.3.0
  'choose_theme' => 'Vyberte téma', //cpg1.3.0
);

$lang_version_alert = array(
  'version_alert' => 'Nepodporovaná verze!', //cpg1.4
  'security_alert' => 'Bezpečnostní poplach!', //cpg1.4.3
  'relocate_exists' => 'Odstraň <a href="http://coppermine-gallery.net/forum/index.php?topic=24217.0" target=_blank>relocate_server.php</a> soubor z website!',
  'no_stable_version' => 'Používáte Coppermine %s (%s) která je míněna pro zkušené uživatele - tato verze je distribuována bez podpory a záruky funkčnosti. Riziko užití je na uživateli!', //cpg1.4
  'gallery_offline' => 'Galerie je momentálně offline a bude viditelná jen pro administrátora. Nezapomeňte ji prepnout do online režimu po dokončení údržby.', //cpg1.4
);

$lang_create_tabs = array(
  'previous' => 'předešlý', //cpg1.4
  'next' => 'další', //cpg1.4
);

// ------------------------------------------------------------------------- //
// File include/init.inc.php
// ------------------------------------------------------------------------- //

// void

// ------------------------------------------------------------------------- //
// File keyword.inc.php                                                      //
// ------------------------------------------------------------------------- //

// void

// ------------------------------------------------------------------------- //
// File include/picmgmt.inc.php
// ------------------------------------------------------------------------- //

// void

// ------------------------------------------------------------------------- //
// File include/plugin_api.inc.php
// ------------------------------------------------------------------------- //
$lang_plugin_api = array(
  'error_wakeup' => "Nelze oživit plugin '%s'", //cpg1.4
  'error_install' => "Nemohu nainstalovat plugin '%s'", //cpg1.4
  'error_uninstall' => "Nemohu odinstalovat plugin '%s'", //cpg1.4
  'error_sleep' => "Nomohu odinstalovat plugin '%s'<br />", //cpg1.4
);

// ------------------------------------------------------------------------- //
// File include/smilies.inc.php
// ------------------------------------------------------------------------- //

if (defined('SMILIES_PHP')) $lang_smilies_inc_php = array(
  'Exclamation' => 'Exclamation',
  'Question' => 'Question',
  'Very Happy' => 'Very Happy',
  'Smile' => 'Smile',
  'Sad' => 'Sad',
  'Surprised' => 'Surprised',
  'Shocked' => 'Shocked',
  'Confused' => 'Confused',
  'Cool' => 'Cool',
  'Laughing' => 'Laughing',
  'Mad' => 'Mad',
  'Razz' => 'Razz',
  'Embarassed' => 'Embarassed',
  'Crying or Very sad' => 'Crying or Very sad',
  'Evil or Very Mad' => 'Evil or Very Mad',
  'Twisted Evil' => 'Twisted Evil',
  'Rolling Eyes' => 'Rolling Eyes',
  'Wink' => 'Wink',
  'Idea' => 'Idea',
  'Arrow' => 'Arrow',
  'Neutral' => 'Neutral',
  'Mr. Green' => 'Mr. Green',
);

// ------------------------------------------------------------------------- //
// File addpic.php
// ------------------------------------------------------------------------- //

// void

// ------------------------------------------------------------------------- //
// File mode.php //cpg1.4
// ------------------------------------------------------------------------- //

if (defined('MODE_PHP')) $lang_mode_php = array(
    0 => 'Opouštím Admin Mód....:-(',
    1 => 'Vstupuji do Admin Módu....:-)',
);

// ------------------------------------------------------------------------- //
// File albmgr.php
// ------------------------------------------------------------------------- //

if (defined('ALBMGR_PHP')) $lang_albmgr_php = array(
    'alb_need_name' => 'Album musí mít jméno',
    'confirm_modifs' => 'Jste si jist(a) těmito změnami ?',
    'no_change' => 'Neudělal(a) jste žádné změny !',
    'new_album' => 'Nové album',
    'confirm_delete1' => 'Jste si jist(a), že chcete smazat toto album?',
    'confirm_delete2' => '\nVšechny obrázky a komentáře budou smazány !',
    'select_first' => 'Nejprve vyberte album',
    'alb_mrg' => 'Správce alb',
    'my_gallery' => '* Moje galerie *',
    'no_category' => '* Není kategorie *',
    'delete' => 'Smazat',
    'new' => 'Nový/á',
    'apply_modifs' => 'Potvrdit změny',
    'select_category' => 'Vybrat kategorii',
);

// ------------------------------------------------------------------------- //
// File banning.php
// ------------------------------------------------------------------------- //

if (defined('BANNING_PHP')) $lang_banning_php = array(
  'title' => 'Nežádoucí uživatelé', //cpg1.4
  'user_name' => 'Uživetelské jméno', //cpg1.4
  'ip_address' => 'IP Addresa', //cpg1.4
  'expiry' => 'Expirace (prázdná jestli je permanentní)', //cpg1.4
  'edit_ban' => 'Ulož změny', //cpg1.4
  'delete_ban' => 'Vymaž', //cpg1.4
  'add_new' => 'Přidej nového nežádoucího', //cpg1.4
  'add_ban' => 'Přidat', //cpg1.4
  'error_user' => 'Nemohu nalézt uživatele', //cpg1.4
  'error_specify' => 'Musíte blíže specifikovat uživatele jménem nebo IP adresou.', //cpg1.4
  'error_ban_id' => 'Vadné nežádoucí ID!', //cpg1.4
  'error_admin_ban' => 'Nemůžete zakázat sami sebe!', //cpg1.4
  'error_server_ban' => 'Tam kde děláš, to je nežádoucí server? Tsk tsk, to neudělám...', //cpg1.4
  'error_ip_forbidden' => 'Nelze 