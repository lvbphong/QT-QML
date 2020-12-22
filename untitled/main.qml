import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    RowLayout {
        Button {
            objectName: "button_ok"
            text: "Ok"
            onClicked: model.submit()
        }
        Button {
            objectName: "button_cancel"
            text: "Cancel"
            onClicked: model.revert()
        }
    }
}
