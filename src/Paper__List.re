open Paper__Utils;

module Section = {
  [@bs.module "react-native-paper"] [@bs.scope "List"] [@react.component]
  external make:
    (
      ~title: string,
      ~children: React.element,
      ~theme: Paper__ThemeProvider.appTheme=?,
      ~style: ReactNative.Style.t=?,
      ~titleStyle: ReactNative.Style.t=?
    ) =>
    React.element =
    "Section";
};

module AccordionGroup = {
  [@bs.module "react-native-paper"] [@bs.scope "List"] [@react.component]
  external make:
    (
      ~onAccordionPress: string => unit=?,
      ~expandedId: string=?,
      ~children: React.element
    ) =>
    React.element =
    "AccordionGroup";
};

module Subheader = {
  [@bs.module "react-native-paper"] [@bs.scope "List"] [@react.component]
  external make:
    (
      ~theme: Paper__ThemeProvider.appTheme=?,
      ~style: ReactNative.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Subheader";
};

module Item = {
  type leftRightProps = {
    .
    color: string,
    style: {
      .
      marginLeft: float,
      marginRight: float,
      marginVertical: option(float),
    },
  };
  [@bs.module "react-native-paper"] [@bs.scope "List"] [@react.component]
  external make:
    (
      ~onPress: ReactNative.Event.pressEvent => unit=?,
      ~title: string,
      ~description: string=?,
      ~theme: Paper__ThemeProvider.appTheme=?,
      ~style: ReactNative.Style.t=?,
      ~titleStyle: ReactNative.Style.t=?,
      ~descriptionStyle: ReactNative.Style.t=?,
      ~titleNumberOfLines: int=?,
      ~descriptionNumberOfLines: int=?,
      ~titleEllipsizeMode: [@bs.string] [ | `head | `middle | `tail | `clip]=?,
      ~descriptionEllipsizeMode: [@bs.string] [
                                   | `head
                                   | `middle
                                   | `tail
                                   | `clip
                                 ]
                                   =?,
      ~left: leftRightProps => React.element=?,
      ~right: leftRightProps => React.element=?
    ) =>
    React.element =
    "Item";
};

module Icon = {
  [@bs.module "react-native-paper"] [@bs.scope "List"] [@react.component]
  external make:
    (~color: string=?, ~style: ReactNative.Style.t=?, ~icon: 'icon) =>
    React.element =
    "Icon";

  let makeProps = (~icon: Icon.iconType) => {
    makeProps(~icon=icon->Icon.extractIconProps, ());
  };
};

module Accordion = {
  [@bs.module "react-native-paper"] [@bs.scope "List"] [@react.component]
  external make:
    (
      ~title: string,
      ~description: string=?,
      ~expanded: bool=?,
      ~left: {. color: string} => React.element=?,
      ~onPress: ReactNative.Event.pressEvent => unit=?,
      ~children: React.element,
      ~theme: Paper__ThemeProvider.appTheme=?,
      ~style: ReactNative.Style.t=?,
      ~titleStyle: ReactNative.Style.t=?,
      ~descriptionStyle: ReactNative.Style.t=?,
      ~titleNumberOfLines: int=?,
      ~descriptionNumberOfLines: int=?,
      ~id: string=?
    ) =>
    React.element =
    "Section";
};
