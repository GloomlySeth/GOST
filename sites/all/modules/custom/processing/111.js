function openMap() {
    window.parent.mytop.document.location.href = './escape00_Map00.htm';
}
function state() {
    alert("手足は縄で厳重に縛られ、口にはガムテープで猿轡をされている　　");
}
function hou() {
    alert("箒が置いてある　　\n学校内で使う柄が長いタイプである　　");
    window.parent.mybottom.document.getElementById('mono_1').innerHTML = '箒';
}
function box() {
    alert("木箱が置いてある　　");
    window.parent.mybottom.document.getElementById('mono_2').innerHTML = '木箱';
}
function kai() {
    alert("棚の上に何かあるようだが彼女の位置からでは確認できない　　\n対象物の端からは白紐が垂れ下がっている　　");
    window.parent.mybottom.document.getElementById('mono_3').innerHTML = '白紐';
}
function tuku() {
    alert("机が並べられている　　");
    window.parent.mybottom.document.getElementById('mono_4').innerHTML = '机';
}
function kura() {
    alert("部屋の奥は暗くて調べができない　　");
}
function openAction() {
    window.parent.mytop.document.location.href = './escape00_Action-initial.htm';
}
function enterAction(str, select) {
    if (str == "") {
        alert("文字入力して下さい。　　");
        retrun();
    } else if (select == "") {
        alert("行動種類を選択して下さい。　　");
        retrun();
    }
    if (select == "tuka") {
        if (str.match(/箒/) != null) {
            alert("物に挟まっており、動かすことが出来ない　　");
        } else if (str.match(/木箱/) != null) {
            alert("今の彼女の状況では使いようが無い　　");
        } else if (str.match(/白紐/) != null) {
            alert("使おうにも手の届かない場所にある　　");
        } else if (str.match(/机/) != null) {
            alert("今の彼女の状況では使いようが無い　　");
        } else if (str.match(/足/) != null) {
            alert("必死に足をばたつかしても、縄は一向に解ける様子はない　　");
        } else if (str.match(/口/) != null) {
            alert("「んー！んんーー！！」　　\n口を塞がれた状態では意味を成さないようだ　　");
        } else if (str.match(/手/) != null) {
            alert("後ろ手にしっかり縛られてしまっている為、何も出来ない　　");
        } else {
            alert("実行した行動はエスケープ要素にならないようだ・・・　　");
        }
    }
    if (select == "zura") {
        if (str.match(/箒/) != null) {
            alert("物に挟まっており、動かすことが出来ない　　");
        } else if (str.match(/(手|て).*を使って.*木箱/) != null) {
            alert("木箱は重く、後ろ手で掴んだぐらいでは動かせない　　");
        } else if (str.match(/(足|脚|あし).*を使って.*木箱/) != null) {
            window.parent.myleft.document.location.href = './escape00_Main-box.htm';
            window.parent.mytop.document.location.href = './escape00_background.htm';
        } else if (str.match(/木箱/) != null && str.match(/を使って/) == null) {
            var substr;
            substr = prompt("「 " + str + " 」" + "をずらす為に何を使う？　　", "");
            if (substr == "" || substr == null) {
                retrun();
            } else {
                act.text_1.value = substr + "を使って" + str;
            }
        } else if (str.match(/白紐/) != null) {
            alert("ずらそうにも手の届かない場所にある　　");
        } else if (str.match(/机/) != null) {
            alert("机を動かしても変化は無い　　");
        } else {
            alert("実行した行動はエスケープ要素にならないようだ・・・　　");
        }
    }
    if (select == "hippa") {
        if (str.match(/木箱/) != null) {
            alert("箱には取っ手などは無いため引っ張ることは出来ない様だ　　");
        } else if (str.match(/白紐/) != null) {
            alert("引っ張ろうにも手の届かない場所にある　　");
        } else if (str.match(/机/) != null) {
            alert("今の彼女の状況では不可能だ　　");
        } else {
            alert("実行した行動はエスケープ要素にならないようだ・・・　　");
        }
    }
    if (select == "hame") {
        alert("実行した行動はエスケープ要素にならないようだ・・・　　");
    }
    if (select == "deru") {
        alert("実行した行動はエスケープ要素にならないようだ・・・　　");
    }
}
/**
 * Created by Wolf on 19.01.2019.
 */
