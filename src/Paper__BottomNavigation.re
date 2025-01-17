type route = {
  .
  "key": string,
  "title": string,
  "icon": string,
  "color": string,
  "badge": string,
  "accessibilityLabel": string,
  "testID": string,
};

type jumpTo = string => unit;

[@bs.module "react-native-paper"] [@react.component]
external make:
  (
    ~onIndexChange: int => unit,
    ~renderScene: {
                    .
                    "route": route,
                    "jumpTo": jumpTo,
                  } =>
                  React.element,
    ~renderLabel: {
                    .
                    "route": route,
                    "focused": bool,
                    "color": string,
                  } =>
                  React.element
                    =?,
    ~getLabelText: {. "route": route} => string=?,
    ~getTestID: {. "route": route} => option(string)=?,
    ~getBadge: {. "route": route} => option(string)=?,
    ~getColor: {. "route": route} => option(string)=?,
    ~onTabPress: {. "route": route} => unit=?,
    ~activeColor: string=?,
    ~inactiveColor: string=?,
    ~keyboardHidesNavigationBar: bool=?,
    ~shifting: bool=?,
    ~labeled: bool=?,
    ~navigationState: {
                        .
                        "index": int,
                        "routes": array(route),
                      }
                        =?,
    ~style: ReactNative.Style.t=?,
    ~barStyle: ReactNative.Style.t=?,
    ~theme: Paper__ThemeProvider.appTheme=?
  ) =>
  React.element =
  "BottomNavigation";
