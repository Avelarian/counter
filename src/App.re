[@react.component]
let make = () => {
  let (counter, setCounter) = React.useState(() => 0);

  <main>
    {React.string("Simple counter with React Hooks")}
    <div>
      <button onClick={_ => setCounter(_ => counter - 1)}>
        {React.string("Decrement")}
      </button>
      <span className="counter">
        {counter |> string_of_int |> React.string}
      </span>
      <button onClick={_ => setCounter(_ => counter + 1)}>
        {React.string("Increment")}
      </button>
    </div>
  </main>;
};
