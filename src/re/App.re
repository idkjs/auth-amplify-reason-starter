open Utils;

requireCSS("../App.css");

let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: _self =>
    <div>
      <h1>
        {ReasonReact.string("Hello from ReasonReact!")}
      </h1>
    </div>,
};
let default =
ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
